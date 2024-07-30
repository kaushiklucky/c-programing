/*Q28 Write a program that takes as input an integer and prints if the 
number is PrimeorFibonicci or both. Use Functions write the program*/


#include <stdio.h>
#include <math.h>
// function to check if a number is prime
int isPrime(int num) {
if (num <= 1) {
return 0; // 0 and 1 are not prime
}
for (int i = 2; i <= sqrt(num); i++) {
if (num % i == 0) {
return 0; // if the number is divisible by i, it's not prime
}
}
return 1; // if the number is not divisible by any i, it's prime
}
// function to check if a number is a Fibonacci number
int isFibonacci(int num) {
int a = 0, b = 1, c;
while (b < num) {
c = a + b;
a = b;
b = c;
}
if (b == num) {
return 1; /*if the number is equal to the last number in the sequence, it's a Fibonacci number*/

} else {
return 0; // otherwise, it's not a Fibonacci number
}
}
int main() {
int num;
printf("Enter an integer: ");
scanf("%d", &num);
int is_prime = isPrime(num);
int is_fibonacci = isFibonacci(num);
if (is_prime) {
printf("%d is a prime number.\n", num);
}
if (is_fibonacci) {
printf("%d is a Fibonacci number.\n", num);
}
if (!is_prime && !is_fibonacci) {
printf("%d is neither a prime number nor a Fibonacci number.\n", num);
}
return 0;
}