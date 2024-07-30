/*Q26 Write a program using pointers to read an array of integers and print its elementsinreverse order*/


#include <stdio.h>

#define N 10

int main() {
    int a[N], *p;

    printf("Enter %d numbers: ", N);
    for (p = a; p < a + N; p++) {
        scanf("%d", p);
    }

    printf("The numbers in reverse order are: ");
    for (p = a + N - 1; p >= a; p--) {
        printf("%d ", *p);
    }
    printf("\n");

    return 0;
}