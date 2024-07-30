/*Q35 The prime numbers from 1 to 2500 can be obtained as follows. From a list of the numbers 1 to 2500, cross out all
multiples of 2 (but not 2 itself). then, find the next number (n, say) that is not crossed out and cross out all
multiplesofn(butnotn). repeatthislaststepprovidedthatnhasnotexceeded50(thesquarerootof2500).thenumbers remaining in the list 
(except 1) are prime. Write a program that uses this method to print all primesfrom1to2500.storeyouroutputinafilecalled primes.out.
Thismethodiscalledthesieveoferatosthenes, namedafterthe Greekmathematician, geographer, and philosopher*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX 2500

int main() {
    bool is_prime[MAX];
    int i, j;
    FILE *fp;

    // Initialize the array with all numbers being prime
    for (i = 0; i < MAX; i++) {
        is_prime[i] = true;
    }

    // Mark multiples of 2 as non-prime
    for (i = 4; i < MAX; i += 2) {
        is_prime[i] = false;
    }

    // Use sieve of Eratosthenes to mark non-primes
    for (i = 3; i <= sqrt(MAX); i += 2) {
        if (is_prime[i]) {
            for (j = i * i; j < MAX; j += i) {
                is_prime[j] = false;
            }
        }
    }

    // Open the file to write the primes
    fp = fopen("primes.out", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write the prime numbers to the file
    for (i = 2; i < MAX; i++) {
        if (is_prime[i]) {
            fprintf(fp, "%d\n", i);
        }
    }

    // Close the file
    fclose(fp);

    return 0;
}