/*Q2 Write a C program to enter the radius of circle/sphere and compute its (i) Perimeter (ii)
Area and (iii) Volume*/

#include<stdio.h>
#define PI 3.14159265

int main()
{
    float r, perimeter, area, volume;
    printf("Enter the radius of the circle/sphere: ");
    scanf("%f", &r);
    perimeter = 2 * PI * r;
    area = PI * r * r;
    volume = (4.0/3.0) * PI * r * r * r;
    printf("Perimeter of the circle: %f\n", perimeter);
    printf("Area of the circle: %f\n", area);
    printf("Volume of the sphere: %f\n", volume);
    return 0;
}