/*Q12 Write a program to find the prime numbers between a range of numbers entered by the user.*/

#include <stdio.h>
#include <math.h>

int is_prime(int n) {
  int i;
  if (n <= 1) return 0;
  for (i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) return 0;
  }
  return 1;
}

int main() {
  int low, high, i;

  printf("Enter low and high: ");
  scanf("%d%d", &low, &high);

  printf("Prime numbers between %d and %d are:", low, high);
  for (i = low; i <= high; i++) {
    if (is_prime(i)) printf("%d ", i);
  }

  return 0;
}