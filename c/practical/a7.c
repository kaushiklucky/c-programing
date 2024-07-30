/*Q7 Write a program to enter an integer and print the sum of the digits in the integer*/

#include<stdio.h>

int main()
{
    int num, sum = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num != 0)
    {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }
    printf("Sum of the digits: %d\n", sum);
    return 0;
}


