/*Q4 Write a C program to find the roots of an quadratic equation*/

#include <stdio.h>
#include <math.h>

int main() {
  double a, b, c, discriminant, root1, root2;

  printf("Enter the coefficients of the quadratic equation (a, b, c): ");
  scanf("%lf%lf%lf", &a, &b, &c);

  discriminant = b*b - 4*a*c;

  if (discriminant > 0) {
    root1 = (-b + sqrt(discriminant)) / (2*a);
    root2 = (-b - sqrt(discriminant)) / (2*a);
    printf("The roots are %lf and %lf\n", root1, root2);
  } else if (discriminant == 0) {
    root1 = root2 = -b / (2*a);
    printf("The root is %lf%lf\n", root1,root2);
  } else {
    printf("The equation has no real roots\n");
  }

  return 0;
}