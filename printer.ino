#include "Adafruit_Thermal.h"
#include "skull.h"
#include "SoftwareSerial.h"
int printer_TX_Pin = 8;  // This is the yellow wire
int printer_RX_Pin = 9;  // This is the green wire
Adafruit_Thermal printer(printer_RX_Pin, printer_TX_Pin);

void setupPrinter() {
  printer.begin();
};

void doPrint(char* output) {
  Serial.print("Will print: ");
  Serial.print(output);
  Serial.print("\n");
  printer.println(output);
  printer.feed(2);
}

void doPrintSkull() {
  printer.printBitmap(skull_width, skull_height, skull_data);
}
