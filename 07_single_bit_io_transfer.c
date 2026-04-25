// bit addressable
#include <reg51.h>
sbit in = P1 ^ 0;
sbit out = P2 ^ 7;
bit savein;

void main(void) {
  P1 = 0xff;
  while (1) {
    savein = in;
    out = savein;
  }
}
