#include "DigiKeyboard.h"
void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); 
  delay(100);
  DigiKeyboard.print("https://youtu.be/OrvrHdISmP4?t=54");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {

}
