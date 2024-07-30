/*Q25 Write a program that reads the cost of an item in the formRRR.PP(WhereRRRRrepresents 
the Rupees and PP represents Paise) and converts the value to a stringof
words. e.g. if we input 125.75, the output should be
 “RUPEES ONE HUNDREDTWENTYFIVE AND PAISE SEVENTY FIVE”  */

#include <stdio.h>
void main()
{
int i=0;
char num[6],c;
printf("Enter the price of an item which should be in format RRR.PP:");
while(c!='\n')
{
c=getchar();
num[i]=c;
i++;
}
switch(num[0])
{
case 49: printf("ONE HUNDRED ");
break;
case 50: printf("TWO HUNDRED ");
break;
case 51: printf("THREE HUNDRED ");
break;
case 52: printf("FOUR HUNDRED ");
break;
case 53: printf("FIVE HUNDRED ");
break;
case 54: printf("SIX HUNDRED ");
break;
case 55: printf("SEVEN HUNDRED ");
break;
case 56: printf("EIGHT HUNDRED ");
break;
case 57: printf("NINE HUNDRED ");
break;
default: printf("\0");
break;
}
switch(num[1])
{
case 50: printf("TWENTY ");
break;
case 51: printf("THIRTY ");
break;
case 52: printf("FORTY ");
break;
case 53: printf("FIFTY ");
break;
case 54: printf("SIXTY ");
break;
case 55: printf("SEVENTY ");
break;
case 56: printf("EIGHTY ");
break;
case 57: printf("NINTY ");
break;
default: printf("\0");
break;
}
if(num[1]>49||num[1]==48)
switch(num[2])
{
case 49: printf("ONE RUPEES ");
break;
case 50: printf("TWO RUPEES");
break;
case 51: printf("THREE RUPEES ");
break;
case 52: printf("FOUR RUPEES");
break;
case 53: printf("FIVE RUPEES");
break;
case 54: printf("SIX RUPEES");
break;
case 55: printf("SEVEN RUPEES");
break;
case 56: printf("EIGHT RUPEES");
break;
case 57: printf("NINE RUPEES");
break;
default: printf("\0 RUPEES");
break;
}
if(num[1]==49)
switch(num[2])
{
case 49: printf("ELEVEN ");
break;
case 50: printf("TWELVE ");
break;
case 51: printf("THIRTEEN ");
break;
case 52: printf("FOURTEEN ");
break;
case 53: printf("FIFTEEN ");
break;
case 54: printf("SIXTEEN ");
break;
case 55: printf("SEVENTEEN ");
break;
case 56: printf("EIGHTEEN ");
break;
case 57: printf("NINETEEN ");
break;
}
if(num[4]>48||num[5]>49)
switch(num[3])
{
case 46: printf("AND ");
break;
default: printf('\0');
break;
}
switch(num[4])
{
case 50: printf("TWENTY ");
break;
case 51: printf("THIRTY ");
break;
case 52: printf("FORTY ");
break;
case 53: printf("FIFTY ");
break;
case 54: printf("SIXTY ");
break;
case 55: printf("SEVENTY ");
break;
case 56: printf("EIGHTY ");
break;
case 57: printf("NINTY ");
break;
default: printf("\0");
break;
}
if(num[4]>49||num[4]==48)
switch(num[5])
{
case 49: printf("ONE PAISE ");
break;
case 50: printf("TWO PAISE ");
break;
case 51: printf("THREE PAISE ");
break;
case 52: printf("FOUR PAISE ");
break;
case 53: printf("FIVE PAISE ");
break;
case 54: printf("SIX PAISE ");
break;
case 55: printf("SEVEN PAISE ");
break;
case 56: printf("EIGHT PAISE ");
break;
case 57: printf("NINE PAISE ");
break;
default: printf("\0");
break;
}
if(num[4]==49)
switch(num[5])
{
case 49: printf("ELEVEN PAISE");
break;
case 50: printf("TWELVE PAISE");
break;
case 51: printf("THIRTEEN PAISE");
break;
case 52: printf("FOURTEEN PAISE ");
break;
case 53: printf("FIFTEEN PAISE ");
break;
case 54: printf("SIXTEEN PAISE ");
break;
case 55: printf("SEVENTEEN PAISE ");
break;
case 56: printf("EIGHTEEN PAISE ");
break;
case 57: printf("NINETEEN PAISE ");
break;
}
}