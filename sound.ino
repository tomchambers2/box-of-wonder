#include <Adafruit_VS1053.h>
#include <SD.h>
#include <SPI.h>
#define SHIELD_RESET  -1      // VS1053 reset pin (unused!)
#define SHIELD_CS     7      // VS1053 chip select pin (output)
#define SHIELD_DCS    6      // VS1053 Data/command select pin (output)
#define CARDCS 4     // Card chip select pin
#define DREQ 3       // VS1053 Data request, ideally an Interrupt pin
Adafruit_VS1053_FilePlayer musicPlayer = Adafruit_VS1053_FilePlayer(SHIELD_RESET, SHIELD_CS, SHIELD_DCS, DREQ, CARDCS);

void playSoundOne() {
  if (!musicPlayer.begin()) { // initialise the music player
     Serial.println(F("Couldn't find VS1053, do you have the right pins defined?"));
     while (1);
  }
  //Serial.println(F("VS1053 found"));  
  SD.begin(CARDCS);
  musicPlayer.useInterrupt(VS1053_FILEPLAYER_PIN_INT);  // DREQ int       
  //Serial.println("about to play sound");
  musicPlayer.setVolume(1,1);
  musicPlayer.startPlayingFile("track001.mp3");  
}

void playSoundTwo() {
  if (!musicPlayer.begin()) { // initialise the music player
     Serial.println(F("Couldn't find VS1053, do you have the right pins defined?"));
     while (1);
  }
  //Serial.println(F("VS1053 found"));  
  SD.begin(CARDCS);
  musicPlayer.useInterrupt(VS1053_FILEPLAYER_PIN_INT);  // DREQ int       
  //Serial.println("about to play sound");
  musicPlayer.setVolume(1,1);
  musicPlayer.startPlayingFile("track002.mp3");  
}

void playSoundThree() {
  if (!musicPlayer.begin()) { // initialise the music player
     Serial.println(F("Couldn't find VS1053, do you have the right pins defined?"));
     while (1);
  }
  //Serial.println(F("VS1053 found"));  
  SD.begin(CARDCS);
  musicPlayer.useInterrupt(VS1053_FILEPLAYER_PIN_INT);  // DREQ int       
  //Serial.println("about to play sound");
  musicPlayer.setVolume(1,1);
  musicPlayer.startPlayingFile("track003.mp3");  
}
