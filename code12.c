// Serial communication
#include <reg51.h>

void main(void) {
  unsigned char mybyte;
  TMOD = 0X20;
  TH1 = 0XFA;
  SCON = 0X50;
  TR1 = 1;
  while (1) {
    while (RI == 0)
      ;
    mybyte = SBUF;
    P1 = mybyte;
    RI = 0;
  }
}