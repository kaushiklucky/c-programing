//Bitwise operator
//30/11/2022
#include<stdio.h>
#include<conio.h>
void main(){
    int x, y;
    printf("\nEnter value of X: ");
    scanf("%d",&x);
    y=x<<3;
    printf("Left shift data = %d\n",y);
    printf("Right shift data = %d\n",x>>3);

}