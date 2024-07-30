//Relational operator example
//05/11/2022
#include<stdio.h>
#include<conio.h>
void main(){
    int x, y, r;
    printf("\nEnter the value of X: ");
    scanf("%d",&x);
    printf("\nEnter the value of Y: ");
    scanf("%d",&y);
    r=(x==y);
    printf("r=%d\n",r);
    r=(x!=y);
    printf("r=%d\n",r);
    r=(x>y);
    printf("r=%d\n",r);
    r=(x>=y);
    printf("r=%d\n",r);
    r=(x<y);
    printf("r=%d\n",r);
    r=(x<=y);
    printf("r=%d\n",r);
}