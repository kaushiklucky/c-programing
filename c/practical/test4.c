#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char strings[MAX_SIZE][MAX_SIZE];
    int i, j, n;

    printf("Enter the number of strings: ");
    scanf("%d", &n);
    printf("Enter the strings:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", strings[i]);
    }

    for (i = 0; i < n; i++) {
        int len = strlen(strings[i]);
        for (j = 0; j < len / 2; j++) {
            char temp = strings[i][j];
            strings[i][j] = strings[i][len - j - 1];
            strings[i][len - j - 1] = temp;
        }
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(strings[j], strings[j+1]) > 0) {
                char temp[MAX_SIZE];
                strcpy(temp, strings[j]);
                strcpy(strings[j], strings[j+1]);
                strcpy(strings[j+1], temp);
            }
        }
    }

    printf("The reversed strings in ascending order are:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}