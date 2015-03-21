#include <Adafruit_NeoPixel.h>
#define PIXELPIN 10
#define NUMPIXELS 16
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIXELPIN, NEO_GRB + NEO_KHZ800);

void setPixels(int color1, int color2, int color3, int delay_time) {
     for(int i=0;i<NUMPIXELS;i++) {
      pixels.setPixelColor(i, pixels.Color(color1, color2, color3));
      pixels.show();
      delay(delay_time);
    }
};

void resetLights() {
   setPixels(0,0,0,0);
}

void blinkPixels(int color1, int color2, int color3, int gap_time, int total) {
  for (int i=0; i<=total; i++) {
    setPixels(color1, color2, color3, 0);
    delay(gap_time);
    setPixels(0, 0, 0, 0);
    delay(gap_time);
  };
}

void loopPixels(int color1, int color2, int color3, int gap_time, int total) {
  for (int i=0; i<=total; i++) {
    setPixels(color1, color2, color3, gap_time);
    setPixels(0, 0, 0, gap_time);
  };
}

void blinkRandom(int total, int gap_time) {
  for (int i=0; i<=total; i++) {
     for(int i=0;i<NUMPIXELS;i++) {
      pixels.setPixelColor(i, pixels.Color(random(256), random(256), random(256)));
      pixels.show();
    };
    delay(gap_time);
  };
};

void playLights() {
   //welcome to the experience
    blinkPixels(255, 255, 255, 50, 10); //10 x 50 - 500ms
    setPixels(255, 255, 255, 0);
    delay(4000);
    
    //3s: series of tests
    blinkRandom(30, 100); //should last 3 seconds. 100x100 = 10 seconds
    
    //7s: polyfilotrap test
    blinkRandom(20, 100);
    
    //9.8s test 2
    blinkRandom(40, 100);    
    
    //12.2s test 3
    blinkRandom(30, 100);   
    
    //17 excellent neurons
    
    //23.5 somethings gone wrong
    delay(500);
    
    for (int i = 255; i>0; i--) {
      setPixels(255,0,0,0);
      pixels.setBrightness(i);
      pixels.show();
      delay(5);
    };  
    pixels.setBrightness(255);    
    
    //26.8 seconds - wroooong   
    Serial.println("gone wrong");    
    delay(2500); 
    
    //32 excuse me
    Serial.println("excuse me");    
    blinkPixels(0, 255, 0, 200, 5);
    loopPixels(0, 255, 0, 50, 1);
    setPixels(0, 0, 0, 1000);
    
    setPixels(0, 255, 0, 0);    
    
    //34.5 still here?
    Serial.println("still here");    
    setPixels(0,255,0,0);
 }
