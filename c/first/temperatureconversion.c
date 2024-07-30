//conversion of centigrate into kelvin and fahrenheit
//Date:12/10/2022
# include<stdio.h>
int main (){
    float cent, kel, fahr;
    printf("\nEnter the temperature in centigrade degrees:");
    scanf("%f", &cent);
    kel = cent+273;
    fahr = (cent*9/5)+32;
    printf("Temperature in kelvin = %f\n", kel);
    printf("Temperature in fahrenheit = %f\n", fahr);
    return 0;
}