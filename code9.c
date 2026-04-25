// ascii 5 and 9--> bcd
#include <reg51.h>

void main(void) {
  unsigned char x = 5;
  unsigned char y = 9;
  unsigned char bcdpacked;
  x = x & 0x0F; // 0x05
  x = x << 4;
  y = y & 0x0F; // 0x09
  bcdpacked = x | y;
  P1 = bcdpacked;
}