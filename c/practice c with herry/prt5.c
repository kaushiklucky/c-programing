
#include<stdio.h>

int main(){
    int simple_interest, rate, principle, year;
    printf("enter the principle: ");
    scanf("%d\t", &principle);
    printf("enter the rate: ");
    scanf("%d\t", &rate);
    printf("enter the year: ");
    scanf("%d\t", &year);
    simple_interest = principle*rate*year/100;
    printf("\nthe simple interest is %d", simple_interest);
    return 0;
}