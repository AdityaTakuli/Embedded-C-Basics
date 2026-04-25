// sfr addressable 80-ffh 8051

sfr P0 = 0x80;
sfr P1 = 0x90;
sfr P2 = 0xA0;

void delay(unsigned int);
void main(void) {
  P0 = 0x55;
  P1 = 0x55;
  P2 = 0x55;
  delay(250);
  P0 = 0xFF;
  P1 = 0xFF;
  P2 = 0xFF;
  delay(250);
}

void delay(unsigned int) {
  for (int i = 0; i < time; i++) {
    for (int j = 0; i < 1000; j++) {
    }
  }
}