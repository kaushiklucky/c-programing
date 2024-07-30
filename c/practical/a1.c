//Q1 Write a C program to input 3 numbers and print their average

#include<stdio.h>
int main()
{
    int num1, num2, num3;
    float average;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    average = (float)(num1 + num2 + num3)/3;
    printf("Average of %d, %d and %d is: %.2f", num1, num2, num3, average);
    return 0;
}