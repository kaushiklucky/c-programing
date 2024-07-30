/*Q9 Write A C program to compute the roots of a quadratic equation.*/

#include <stdio.h>
#include <math.h>

int main() {
  float a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

  printf("Enter the coefficients a, b and c: ");
  scanf("%f%f%f", &a, &b, &c);

  discriminant = b * b - 4 * a * c;

  // Roots are real and different
  if (discriminant > 0) {
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);
    printf("root1 = %f and root2 = %f", root1, root2);
  }

  // Roots are real and equal
  else if (discriminant == 0) {
    root1 = root2 = -b / (2 * a);
    printf("root1 = root2 = %f;", root1);
  }

  // Roots are complex and different
  else {
    realPart = -b / (2 * a);
    imaginaryPart = sqrt(-discriminant) / (2 * a);
    printf("root1 = %f + %fi and root2 = %f - %fi", realPart, imaginaryPart, realPart, imaginaryPart);
  }

  return 0;
}