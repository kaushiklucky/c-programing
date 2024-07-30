/*It is not necessary that a loop 
counter must only be an int .
It can even be a float*/
#include<stdio.h>
void main()
{
    float a = 10.0;
    while(a<=10.5)
    {
        printf("\nRaindrops on roses....");
        printf(".... and whiskers on kittens");
        a = a + 0.1;
    }
}