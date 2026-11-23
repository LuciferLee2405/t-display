#include <TFT_eSPI.h>
#include <SPI.h>
#include <U8g2_for_TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();
U8g2_for_TFT_eSPI u8f;

void setup() {
  // put your setup code here, to run once:
  tft.init();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);
  
  u8f.begin(tft);
  u8f.setFontMode(0);                 
  u8f.setFontDirection(0);            
  u8f.setForegroundColor(TFT_WHITE);  
  u8f.setBackgroundColor(TFT_BLACK);  

  u8f.setFont(u8g2_font_unifont_t_vietnamese1);

  u8f.setCursor(10, 40);
  u8f.print("Tạm Biệt, thế giới");

}

void loop() {
  // put your main code here, to run repeatedly:

}
