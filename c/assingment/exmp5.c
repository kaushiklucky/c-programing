// Insurance of driver - using logical operators ---- Method -2
//30/12/22
#include<stdio.h>
void main( ) 
{ 
 char sex, ms ; 
 int age ;
 printf ( "\nEnter age, sex, marital status " ) ;
 scanf ( "%d %c %c", &age, &sex, &ms ) ;
 if ( ( ms == 'M') || ( ms == 'U' && sex == 'M' && age > 30 ) || (ms == 'U' && sex == 'F'   && age > 25 ) )
      printf ( "Driver is insured" ) ;
 else
      printf ( "Driver is not insured" ) ;
} 
