#include <stdio.h>
#include <ctype.h>
int main() {
FILE *file;
char filename[100];
char line[100];
int digits[10] = {0};
int letters[26] = {0};
int i;
printf("Enter the name of the file: ");
scanf("%s", filename);
file = fopen(filename, "r");
if (file == NULL) {
printf("Error: could not open file.\n");
return 1;
}
while (fgets(line, sizeof(line), file) != NULL) {
for (i = 0; line[i] != '\0'; i++) {
if (isdigit(line[i])) {
digits[line[i] - '0']++;
} else if (isalpha(line[i])) {
letters[tolower(line[i]) - 'a']++;
}
}
}
printf("Digit frequencies:\n");
for (i = 0; i < 10; i++) {
printf("%d: %d\n", i, digits[i]);
}
printf("Letter frequencies:\n");
for (i = 0; i < 26; i++) {
printf("%c: %d\n", 'a' + i, letters[i]);
}
fclose(file);
return 0;
}