
#include<stdio.h>

int main(){
    float radius, area, perimiter, volume, pi = 22/7;
    printf("\nEnter the radius of circle: ");
    scanf("%f",&radius);
    perimiter = 2*pi*radius;
    area = pi*radius*radius;
    volume = (4/3)*pi*radius*radius*radius;
    printf("the perimiter of circle is %f\n", perimiter);
    printf("the area of circle is %f\n", area);
    printf("the volume of shpere is %f\n", volume);
    return 0;
}