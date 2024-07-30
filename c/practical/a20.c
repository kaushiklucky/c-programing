/*Q20 Write a program that counts the number of vowels, consonants and digits inagivenline of string*/

#include<stdio.h>
#include<ctype.h>

int main(){
    char line[100];
    int vowels = 0, consonants = 0, digits = 0, i;
    printf("Enter a line of text: ");
    fgets(line, 100, stdin);
    for(i = 0; line[i] != '\0'; i++){
        if(isalpha(line[i])){
            if(line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O' || line[i] == 'U' ||
               line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u'){
                vowels++;
            }
            else{
                consonants++;
            }
        }
        else if(isdigit(line[i])){
            digits++;
        }
    }
    printf("Vowels: %d\nConsonants: %d\nDigits: %d\n", vowels, consonants, digits);
    return 0;
}