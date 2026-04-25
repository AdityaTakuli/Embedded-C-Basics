#include <reg51.h>

void main(void) {
  unsigned char bytedata;
  P0 = 0xFF;
  while (1) {
    bytedata = P0;
    if (bytedata < 100) {
      P1 = bytedata;
    } else {
      P2 = bytedata;
    }
  }
}
