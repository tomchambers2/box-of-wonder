#include <avr/pgmspace.h>

void setup() {
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
      playSound();
      playLights();
      printHoroscope();
      delay(5000);
  }
}
