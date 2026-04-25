#include <reg51.h>
sbit swpin = 2 ^ 0;

void main(void) {
  unsigned char z;
  unsigned msg1[] = "Normal Speed";
  unsigned char msg[] = "High Speed";
  TMOD = 0X20;
  TH1 = 0XFF;
  SCON = 0X50;
  TR1 = 1;
  if (swpin == 0) {
    for (z = 0; z < 12; z++) {
      SBUF = msg1[z];
      while (TI == 0)
        ;
      TI = 0;
    }
  } else {
    PCON = PCON | 0X80; // Enabling SMOD = 1 double the baudrate
    for (z = 0; z < 10; z++) {
      SBUF = msg2[z] while (TI == 0);
      TI = 0;
    }
  }
}
