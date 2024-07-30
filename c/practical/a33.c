/*Q33 Implement the problem 22 using Files. Read the text from a file and store the count of
letters and digits to another file*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    char str[100];
    int i, j, count;
    int letter[26] = {0};
    int digit[10] = {0};
    
    FILE * filePtr = fopen("Input.txt", "r");

    int k = 0;
    char c = fgetc(filePtr);
    while (c != EOF){
        str[k] = c;
        c = fgetc(filePtr);
        k++;
    }
    str[k] = '\0';
    fclose(filePtr);
    
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            count = str[i] - 'A';
            letter[count]++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            count = str[i] - 'a';
            letter[count]++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            count = str[i] - '0';
            digit[count]++;
        }
    }
    
    filePtr = fopen("Output.txt", "w");

    fprintf(filePtr, "Frequency of letters:\n");
    for (i = 0; i < 26; i++)
    {
		if (letter[i] > 0)
        	fprintf(filePtr, "%c: %d\n", (i + 'a'), letter[i]);
    }
    
    fprintf(filePtr, "Frequency of digits:\n");
    for (j = 0; j < 10; j++)
    {
		if (digit[j] > 0)
        	fprintf(filePtr, "%d: %d\n", j, digit[j]);
    }

    fclose(filePtr);
}