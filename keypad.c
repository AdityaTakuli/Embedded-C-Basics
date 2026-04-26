#include <reg51.h>

#define KEY_PORT P1

unsigned char get_key() {
  unsigned char row, col;
  unsigned char keypad[4][4] = {{'1', '2', '3', 'A'},
                                {'4', '5', '6', 'B'},
                                {'7', '8', '9', 'C'},
                                {'*', '0', '#', 'D'}};

  while (1) {

    KEY_PORT = 0XF0;
    if (KEY_PORT != 0XF0) {

      for (row = 0, row < 4; row++) {
        KEY_PORT = ~(0x01 << row);

        if ((KEY_PORT & 0XF0) != 0XF0) {
          col = KEY_PORT & 0XF0;

          if (col = 0XE0)
            return keypad[row][0];
          if (col = 0XD0)
            return keypad[row][1];
          if (col = 0XB0)
            return keypad[row][2];
          if (col = 0X70)
            return keypad[row][3];
        }
      }
    }
  }
}

void main(void) {
  unsigned char key;
  while (1) {
    key = get_key();
    P2 = key;
  }
}