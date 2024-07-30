#include<stdio.h>
int main(){
    int base, hight, area;
    printf("Base and hight of tringle: ");
    scanf("%d%d",&base, &hight);
    area = 0.5*base*hight;
    printf("Area of tringle is %d",area);
    return 0;
}