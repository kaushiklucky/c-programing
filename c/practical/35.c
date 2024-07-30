#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
int n, i;
int primes[2500] = {0};
int count = 0;
// Initialize the list of numbers as all primes
for (n = 2; n <= 2500; n++) {
primes[n-1] = 1;
}
// Cross out multiples of 2
for (n = 4; n <= 2500; n += 2) {
primes[n-1] = 0;
}
// Cross out multiples of odd numbers
for (n = 3; n <= sqrt(2500); n += 2) {
if (primes[n-1]) {
for (i = n * n; i <= 2500; i += 2 * n) {
primes[i-1] = 0;
}
}
}
// Write the primes to the output file
FILE *file = fopen("primes.out", "w");
if (file == NULL) {
printf("Error: could not open file.\n");
return 1;
}
for (n = 2; n <= 2500; n++) {
if (primes[n-1]) {
fprintf(file, "%d ", n);
count++;
}
}
fclose(file);
printf("Found %d primes from 1 to 2500.\n", count);
return 0;
}