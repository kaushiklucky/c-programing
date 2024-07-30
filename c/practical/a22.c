/*Q22 Writea program that takes as input a line of text and counts the frequency of each digit and letter inthe input. 
The program will treat an uppercase letter and its lowercase equivalent as the sameletter;
forexample, E and e increment thesamecounter*/

#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 100

int main(void) {
  char input[MAX_LENGTH];
  int digit_counts[10] = {0};
  int letter_counts[26] = {0};

  printf("Enter a line of text: ");
  fgets(input, MAX_LENGTH, stdin);

  for (int i = 0; input[i]; i++) {
    char c = tolower(input[i]);
    if (isdigit(c)) {
      digit_counts[c - '0']++;
    } else if (isalpha(c)) {
      letter_counts[c - 'a']++;
    }
  }

  printf("Digit counts:\n");
  for (int i = 0; i < 10; i++) {
    printf("%d: %d\n", i, digit_counts[i]);
  }

  printf("Letter counts:\n");
  for (int i = 0; i < 26; i++) {
    printf("%c: %d\n", 'a' + i, letter_counts[i]);
  }

  return 0;
}