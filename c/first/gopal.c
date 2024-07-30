#include<stdio.h>
void main()
{
    int p,q,r,s,numerator,denominator ,fraction;
    printf("enter the value p,q,r,s:\n");
    scanf("%d %d %d %d",&p,&q,&r,&s);
    numerator = p*s - q*r ;
    denominator =q*s ;
    fraction = numerator/denominator ;
    printf("fraction %d\n",fraction);
    
}