//body mass index
//Date:13/10/2022
#include <stdio.h> 
int main() 
{ 

float height, weight, bmi; 
printf("\nEnter Height in centimeters: "); 
scanf("%f", &height); 
printf("\nEnter Weight in kilograms: "); 
scanf("%f", &weight); 
height = height / 100; 
bmi = weight / (height * height); 
printf("\nBody Mass Index is: %.2f", bmi); 
return 0; 
}