/*Q6 Given a n integer number write a program that displays the number as follows
First line : All digits
Second Line : All except first digit
Third line : All except first two digits*/

#include<stdio.h>
#include<math.h>

int main()
{
    int num, digits = 0, temp;
    printf("Enter an integer: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }
    temp = num;
    for (int i = 1; i <= digits; i++)
    {
        int divisor = pow(10, digits - i);
        int quotient = temp / divisor;
        int remainder = temp % divisor;
        printf("All digits except the last %d digits: %d\n", i, remainder);
        temp = quotient;
    }
    printf("The last digit: %d\n", temp % 10);
    return 0;
}