/*Q19 Write a program to enter two 3 x 3 matrices and find their
a. sum
b. Multiplication
c. Transpose   */


// B part


#include <stdio.h>

int main() {
   int a[3][3], b[3][3], c[3][3], i, j, k;

   printf("Enter elements of first matrix:\n");
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         scanf("%d", &a[i][j]);
      }
   }

   printf("Enter elements of second matrix:\n");
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         scanf("%d", &b[i][j]);
      }
   }

   // Initializing elements of result matrix to 0
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         c[i][j] = 0;
      }
   }

   // Multiplying matrices a and b and storing result in c
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         for (k = 0; k < 3; k++) {
            c[i][j] += a[i][k] * b[k][j];
         }
      }
   }

   printf("Result matrix:\n");
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         printf("%d\t", c[i][j]);
      }
      printf("\n");
   }

   return 0;
}