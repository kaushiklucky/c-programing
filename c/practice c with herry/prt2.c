
#include<stdio.h>
#include<math.h>

int main(){
    float side1, side2, side3, area, semiperimiter;
    printf("\nEnter the three sides of tringle: ");
    scanf("%f%f%f",&side1, &side2, &side3);
    semiperimiter = side1+side2+side3/2;
    area = sqrt(semiperimiter*(semiperimiter - side1)*(semiperimiter - side2)*(semiperimiter - side3));
    printf("the semiperimeter of tringle is %f\n",semiperimiter);
    printf("sides of tringle is %f,%f,%f\n", side1, side2, side3);
    printf("The area of tringle is %f\n",area);
    return 0;
}

