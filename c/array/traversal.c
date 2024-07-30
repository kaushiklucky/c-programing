#include <stdio.h>
int main()
{
    int a[50], size, i;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter element of array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d ", &a[i]);
    }
    printf("Element in array are: ");
    for (i = 0; i < size; i++)
    {
        printf("%d", a[i]);
    }
}