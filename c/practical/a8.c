/*Q8 Write a C program to input an investment amount and compute its 
fixeddepositcommulative return after 10 years at the rate of interest of 7.75%*/

#include<stdio.h>
#include<math.h>

int main()
{
    float investment, interest_rate = 7.75, interest, total_amount;
    int years = 10;
    printf("Enter the investment amount: ");
    scanf("%f", &investment);
    interest = investment * interest_rate * years / 100;
    total_amount = investment + interest;
    printf("the interest is %f\n", interest);
    printf("Fixed deposit cumulative return after %d years at an interest rate of %f: %f\n", years, interest_rate, total_amount);
    return 0;
}