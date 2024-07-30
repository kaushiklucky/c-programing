/*Q5 Write down a function in C to implement bitwise AND, OR, XOR and NOT operations*/

#include <stdio.h>

unsigned int bitwise_and(unsigned int x, unsigned int y) {
  return x & y;
}

unsigned int bitwise_or(unsigned int x, unsigned int y) {
  return x | y;
}

unsigned int bitwise_xor(unsigned int x, unsigned int y) {
  return x ^ y;
}

unsigned int bitwise_not(unsigned int x) {
  return ~x;
}

int main() {
  unsigned int x, y;
  printf("enter the value of X and Y: ");
  scanf("%u%u", &x, &y);

  printf("x: %u\n", x);
  printf("y: %u\n", y);

  printf("bitwise_and(x, y): %u\n", bitwise_and(x, y));
  printf("bitwise_or(x, y): %u\n", bitwise_or(x, y));
  printf("bitwise_xor(x, y): %u\n", bitwise_xor(x, y));
  printf("bitwise_not(x): %u\n", bitwise_not(x));

  return 0;
}