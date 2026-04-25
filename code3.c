// bit addressable
#include <reg51.h>
sbit mybit = P2 ^ 4;

void main(void) {
  while (1) {
    mybit = 1;
    mybit = 0;
  }
}