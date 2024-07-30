/*Q13 Write a program to find the HCF of two integers entered by the user*/

#include <stdio.h>

int hcf(int a, int b) {
  if (b == 0) return a;
  return hcf(b, a % b);
}

int main() {
  int a, b, result;

  printf("Enter two integers: ");
  scanf("%d%d", &a, &b);

  result = hcf(a, b);
  printf("The HCF of %d and %d is %d", a, b, result);

  return 0;
}