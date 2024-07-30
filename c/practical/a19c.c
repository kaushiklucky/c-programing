/*Q19 Write a program to enter two 3 x 3 matrices and find their
a. sum
b. Multiplication
c. Transpose   */

// C part

#include <stdio.h>

void transpose(int a[3][3]) {
    int temp;
    for (int i = 0; i < 3; i++) {
        for (int j = i+1; j < 3; j++) {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
}

int main() {
    int a[3][3], b[3][3];

    printf("Enter elements for first matrix: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements for second matrix: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Transpose of first matrix: \n");
    transpose(a);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of second matrix: \n");
    transpose(b);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}