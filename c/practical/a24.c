/*Q24 Write a C program to display following Pattern:
 1
 A B
 2 3 4
C D E F
5 6 7 8 9*/


#include<stdio.h>
int main()
{
int num,r,c,k;
static int i=1;
static char ch='A';
printf("Enter no. of rows : ");
scanf("%d", &num);
for(r=1; r<=num; r++)
{
for(k=0;k<=num-r;k++)
printf(" ");
for(c=1; c<=r; c++)
{
if(r%2==0)
printf(" %c",ch++);
else
printf(" %d",i++);
}
printf("\n");
}
return 0;
}
