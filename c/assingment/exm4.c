//Insurance of driver – using nested if else ------- Method-1
//30/12/22
#include<stdio.h>
void main( )
 { 
  char gen, ms ; int age ;
  printf ( "\nEnter age,  gen, marital status " ) ; 
  scanf ( "%d %c %c", &age, &gen, &ms) ; 
 if ( ms == 'M' ) 
         printf ( "Driver is insured" ) ; 
 else {
           if ( gen == 'M' ) 
               {
                if ( age > 30 ) 
                     printf ( "Driver is insured" ) ; 
                else 
                     printf ( "Driver is not insured" ) ; 
              }  
           else 
             {
              if ( age > 25 ) 
                  printf ( "Driver is insured" ) ;
              else 
                 printf ( "Driver is not insured" ) ;
              }
           }
 }