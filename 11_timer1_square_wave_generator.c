// timer 1 mode 1 delay 5 50hz square wave at P2.3
#include <reg.51.h>
sbit mybit = P2 ^ 3;

void delayTMOD(void);

void main(void) {
  while (1) {
    mybit = 1;
    delayTMOD();
    mybit = 0;
    delayTMOD();
  }
}

void delayTMOD(void) {
  TMOD = 0x10;
  TH1 = 0xDC;
  TL1 = 0x00;
  TR1 = 1;
  while (TF1 == 0)
    ;
  TR1 = 0;
  TF1 = 0;
}