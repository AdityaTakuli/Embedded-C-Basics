// bcd 0x29--> ascii
#include <reg51.h>

void main(void) {
  unsigned char x, y;
  unsigned char mybyte = 0x29;
  x = mybyte & 0x0f; // 0x09
  P1 = x | 0x30;
  y = mybyte & 0xf0;
  y = y >> 4; // 0x02
  P2 = y | 0x30;
}