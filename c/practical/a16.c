/*16 Write a C program to display following Pattern
 1
 121
12321
 121
 1
      */


#include<stdio.h>
int main(){
int n;
printf("Enter Number:");
scanf("%d",&n);
int i=1;
while(i<=n)
{
for(int j=1;j<=n-i;j++)
printf(" ");
for(int j=1;j<=i;j++)
printf("%d", j);
for(int j=i-1;j>0;j--)
printf("%d", j);
printf("\n");
i++;
}
i=n-1;
while(i>0)
{
for(int j=1;j<=n-i;j++)
printf(" ");
for(int j=1;j<=i;j++)
printf("%d", j);
for(int j=i-1;j>0;j--)
printf("%d", j);
printf("\n");
i--;
}
}
