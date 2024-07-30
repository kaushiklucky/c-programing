/*Q16 Write a C program to display following Pattern
1
1 2 1
1 2 3 2 1
1 2 1
1          */

#include <stdio.h>

int main()
{
    int i, j, k, n = 4;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        for (k = i - 1; k >= 1; k--)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}