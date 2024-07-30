/*Q29 Write a function substring that, given two strings s1 and s2,
returns the starting position of thefirst
occurrence of s1 in s2. If s1 is not in s2,return -1. For example, 
substring("mom","thermometer") returns 4but substring("dad","thermometer")returns -1.*/


#include <stdio.h>
#include <string.h>

int substring(const char s1[], const char s2[]){
    const int lengthOfSubString = strlen(s1);

    for (int i = 0; i < strlen(s2) - lengthOfSubString + 1; i++){
        for (int j = 0; j < lengthOfSubString; j++){
            if(s2[i + j] != s1[j])
                break;
            else if (j == lengthOfSubString - 1)
                return i;
        }
    }
    return -1;
}

void main()
{
    char string[] = "thermometer";
    char sub[] = "mom";
    printf("%s occurs in %s at index no. %d\n", sub, string, substring(sub, string));
}