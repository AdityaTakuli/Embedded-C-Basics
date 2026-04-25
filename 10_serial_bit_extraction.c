#include <reg51.h>

sbit P1b0 = P1 ^ 0;
sbit regALSB = ACC ^ 0;

void main(void) {
  unsigned char mydata = 0x44;
  unsigned char x;
  ACC = mydata;

  for (x = 0; x < 8; x++) {
    P1b0 = mydata;
    ACC = ACC >> 1;
  }
}