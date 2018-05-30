#include "ssd1306.hpp"
#include "upm_utilities.h"
#include <unistd.h>

int
main(int argc, char** argv)
{
	
    upm::SSD1306 lcd(1, 0x3c);
    while(true)
    {
      lcd.clear();
      lcd.stopscroll();
      lcd.clear();
      lcd.setCursor(1, 0);
      lcd.write("  96Boards CE");
      lcd.setCursor(3, 0);
      lcd.write("    MRAA UPM");
      lcd.setCursor(5, 0);
      lcd.write("  SSD1306 OLED");
      sleep(3);
      lcd.invert(true);
      sleep(3);
      lcd.dim(true);
      sleep(3);
      lcd.dim(false);
      sleep(3);
      lcd.invert(false);
      lcd.startscrollright(0x00, 0x0F);
      sleep(5);
      lcd.stopscroll();
      lcd.startscrollleft(0x00, 0x0F);
      sleep(5);
      lcd.stopscroll();
      lcd.startscrolldiagleft(0x00, 0x0F);
      sleep(5);
      lcd.stopscroll();
      lcd.startscrolldiagright(0x00, 0x0F);
      sleep(5);
      lcd.stopscroll();
      sleep(3);
      lcd.clear();
    }
}
