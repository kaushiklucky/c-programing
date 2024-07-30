/*Q15 Write a program to evaluate the following functions to 0.0001% accuracy
Sinx = x – x
3/3! + x
5/5! – x
7/7!+……..*/


#include <stdio.h>
#include <math.h>
// Function for calculating sin value
void cal_sin(float n)
{
float accuracy = 0.0001, denominator, sinx, sinval;
// Converting degrees to radian
n = n * (3.142 / 180.0);
float x1 = n;
// maps the sum along the series
sinx = n;
// holds the actual value of sin(n)
sinval = sin(n);
int i = 1;
do
{
denominator = 2 * i * (2 * i + 1);
x1 = -x1 * n * n / denominator;
sinx = sinx + x1;
i = i + 1;
} while (accuracy <= fabs(sinval - sinx));
printf("sinx=%f",sinx);
}
// Main function
int main()
{
float x;
printf("Enter the value of angle in degree: ");
scanf("%f",&x);
cal_sin(x);
return 0;
}