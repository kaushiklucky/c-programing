/*Q17 Given the two one dimensional arrays A and B of size 10 which are sorted in ascending order. 
Write a C program to merge them into single sorted array C that contains everyitem from arrays A and B in ascending order*/

#include<stdio.h>

int main()
{
int a[10], b[10], c[20], i, j, limitC, temp;
printf("Enter 10 elements in array A:");
for(i=0; i<10; i++)
scanf("%d", &a[i]);
printf("Enter 10 elements in array B:");
for(i=0; i<10; i++)
scanf("%d", &b[i]);
printf("\nElements of Array A are:\n");
for(i=0; i<10; i++)
{
printf("%d ,",a[i]);
}
printf("\n\nElements of Array B are:\n");
for(i=0; i<10; i++)
{
printf("%d ," ,b[i]);
}
for(i=0; i<10; i++)
c[i] = a[i];
for(j=0; j<10; j++)
{
c[i] = b[j];
i++;
}
for(j=0; j<19; j++)
{
for(i=0; i<19; i++)
{
if(c[i]>c[i+1])
{
temp = c[i];
c[i] = c[i+1];
c[i+1] = temp;
}
}
}
printf("\n\nElements of Array C are:\n");
for(i=0; i<20; i++)
{
printf("%d ,",c[i]);
}
return 0;
}