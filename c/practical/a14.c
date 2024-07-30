/*Q14 The numbers in the sequence
1 1 2 3 5 8 13 21….. are called Fibbonacci numbers. 
Write a programusingdo…while loop to calculate and print the first m Fibonacci numbers*/

#include <stdio.h>

int main()
{
    int n, first = 0, second = 1, next, c;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("First %d terms of Fibonacci series:\n", n);
    c = 0;
    do {
        if (c <= 1) {
            next = c;
        }
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d\n", next);
        c++;
    } while (c < n);
    return 0;
}