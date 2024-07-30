/*Q11 . Given a number, write a program using while loop to 
reverse the digits of the number. For example number 12345 should be written as 54321.*/

#include <stdio.h>

int main() {
  int n, reversed = 0;

  printf("Enter a number: ");
  scanf("%d", &n);

  while (n != 0) {
    reversed = reversed * 10 + n % 10;
    n /= 10;
  }

  printf("Reversed number: %d", reversed);

  return 0;
}