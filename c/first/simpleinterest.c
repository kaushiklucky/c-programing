/*calculation of simple interest */
//Date:7/10/2022
# include<stdio.h>

int main()
{
    int p, n;
    float r, si;
    p = 1000;
    n = 3;
    r = 9.5;
    si = p*n*r/100;
    printf("%f\n", si);
} 