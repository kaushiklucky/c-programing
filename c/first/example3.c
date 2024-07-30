//Logical operator example
//30/11/2022
#include<stdio.h>
#include<conio.h>
void main(){
    int x, y, z;
    printf("\nEnter three numbers X, Y, Z: ");
    scanf("%d%d%d",&x,&y,&z);
    if((x>y)&&(x>z))
      printf("X is greatest");
    if((y>x)&&(y>z))
      printf("Y is greatest");
    if((z>x)&&(z>y))
      printf("Z is greatest");
}