#include <reg51.h>

sbit Wave = P0 ^ 1;

void timer0(void) interrupt 1 { WAVE = ~WAVE; }

void serTx(void) interrupt 4 {
  if (RI == 1) {
    P0 = SBUF;
    RI = 0;
  }
  if (TI == 1) {
    TI = 0;
  }
}

void main(void) {
  unsigned char x;
  P1 = 0XFF;
  TMOD = 0X22;
  TH1 = 0XFD; // 9600 baudrate
  TH0 = 0XA4; // 5KHz
  SCON = 0X50;
  TR1 = 1;
  TR0 = 1;
  IE = 0X92;
  while (1) {
    x = P1;
    P2 = x;   // copy to port 2
    SBUF = x; // serially out
    while (TI == 0)
      ;
    TI = 0;
  }
}