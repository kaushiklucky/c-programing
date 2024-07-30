
#include<stdio.h>

int main(){
    float celcius, farh, kalvin;
    printf("\nEnter the temperature in celcius: ");
    scanf("%f",&celcius);
    farh = ((9/5)*celcius)+32 ;
    kalvin = celcius+273.15;
    printf("temperature in fahrenheit is %f",farh);
    printf("\ntemperature in kelvin is %f", kalvin);
    return 0;
}