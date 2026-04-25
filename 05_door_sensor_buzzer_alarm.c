// bit addressable
#include <reg51.h>
sbit door = P1 ^ 1;
sbit buzzer = P1 ^ 7;

void delay(unsigned int);

void main(void) {
  door = 0xff;
  while (door == 1) {
    buzzer = 0;
    delay(250);
    buzzer = 1;
    delay(250);
  }
}

void delay(unsigned int time) {
  for (int i = 0; i < time; i++) {
    for (int j = 0; i < 1000; j++) {
    }
  }
}