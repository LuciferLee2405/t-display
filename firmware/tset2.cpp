#include <TFT_eSPI.h>
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  // put your setup code here, to run once:
  tft.init();
  tft.setRotation(1);

  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_RED, TFT_BLACK);
  tft.setTextSize(3);
  tft.setCursor(20, 40);
  tft.print("Hello, World!");

}

void loop() {
  // put your main code here, to run repeatedly:

}
