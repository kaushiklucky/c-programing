

#include <stdio.h> 
#include<conio.h> 
int main() 
{ 
 int i, j, n; 
 int table = n;
 int max = 5; 
 for (i = 1; i <= table; i++) 
 { 
  for (j = 0; j <= max; j++)
  { 
   printf("%d x %d = %d\n", i, j,  i*j);
  }
   printf("\n"); 
 }
}