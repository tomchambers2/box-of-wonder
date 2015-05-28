#include <avr/pgmspace.h>

void setup() {
  Serial.begin(9600);
  
  randomSeed(analogRead(A2));

  setupPrinter();
  initPir();
  resetLights();
}

void printHoroscope() {
  char* horoscope = generateHoroscope();
  doPrint(horoscope);
  generateDeath();
}  

void loop() {
  
  boolean playing = false;
  int status = getPirStatus();
  if (status && !playing) {
      int choice = random(0,3);
      if (choice==0) {
        //black guy
        playSoundOne();
        playLightsOne();        
      }
      if (choice==1) {
        //irish
        playSoundTwo();
        playLightsTwo();        
      }
      if (choice==2) {
        //newsreader
        playSoundThree();
        playLightsThree();        
      }
      printHoroscope();
      delay(5000);
  }
}
