#include <reg51.h>

void delay(unsigned int);

void main(void) {
  unsigned char bytedata;
  P0 = 0xFF;
  while (1) {
    bytedata = P0;
    delay(500);
    P2 = bytedata;
    delay(500);
  }
}

void delay(unsigned int time) {
  for (int i = 0; i < time; i++) {
    for (int j = 0; j < 1000; j++) {
    }
  }
}