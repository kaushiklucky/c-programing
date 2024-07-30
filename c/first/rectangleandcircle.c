//area and perimeter of rectangle and cirle
//Date:12/10/2022
#include<stdio.h>
int main(){
    float length, breath, radius, pericircle, areacircle, perirectangle, arearectangle;
    printf("\nEnter length, breath, and radius:");
    scanf("%f %f %f", &length, &breath, &radius);
    pericircle = 2*(3.14*radius);
    areacircle = 3.14*radius*radius;
    perirectangle = 2*(length+breath);
    arearectangle = length*breath;
    printf("perimeter of circle = %f\n", pericircle);
    printf("area of cercle = %f\n", areacircle);
    printf("perimeter of rectangle = %f\n", perirectangle);
    printf("area of rectangle = %f\n", arearectangle);
    return 0;
}