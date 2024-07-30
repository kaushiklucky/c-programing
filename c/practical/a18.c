/*Q18 Write a program that will count the number of occurrences of a specified character inagiven line of Text.*/

#include <stdio.h>
#include <string.h>

int main() {
  char text[100], c;
  int count = 0;
  
  printf("Enter a line of text: ");
  fgets(text, 100, stdin);
  
  printf("Enter the character to count: ");
  scanf("%c", &c);
  
  for (int i = 0; i < strlen(text); i++) {
    if (text[i] == c) {
      count++;
    }
  }
  
  printf("The character '%c' appears %d times in the text.\n", c, count);
  
  return 0;
}
