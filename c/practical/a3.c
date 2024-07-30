/*Q3 Write a program in C to show that Right shift effectively divides a number by 2 and a left
shift effectively multiplies a number by 2*/

#include<stdio.h>

int main()
{
    int num, right_shift, left_shift;
    printf("Enter an integer: ");
    scanf("%d", &num);
    right_shift = num >> 1;
    left_shift = num << 1;
    printf("%d divided by 2 using right shift operator: %d\n", num, right_shift);
    printf("%d multiplied by 2 using left shift operator: %d\n", num, left_shift);
    return 0;
}