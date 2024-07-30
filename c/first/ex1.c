#include<stdio.h>
int main(){
    int avg, sum=0;
    int i;
    int marks[5];
    printf("enter marks\n");
    for(i=0; i<=4; i++)
    {
        scanf("%d", &marks[i]);
    }
    for(i=0; i<=4; i++)
    sum = sum + marks[i];
    avg = sum/5;
    printf("average marks = %d\n",avg);
    printf("%d\n",marks[3]);
    //printf("%d",marks[i]);
    for(i=0; i<=4; i++)
    printf("\narray element at index %d is: %d",i,marks[i]);
    return 0;
}