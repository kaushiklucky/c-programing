/*Q34 Write a function using pointers to add two matrices and to return the resultant matrixto the calling function*/

#include <stdio.h>

void AddMatrices(int result[3][3], int mat1[3][3], int mat2[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void main()
{
    int mat1[3][3] = {
        { 1, 2, 1 },
        { 3, 1, 6 },
        { 9, 6, 1 }
    };
    int mat2[3][3] = {
        { 5, 6, 3 },
        { 3, 5, 3 },
        { 1, 4, 5 }
    };

    int sum[3][3];
    AddMatrices(sum, mat1, mat2);

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
}