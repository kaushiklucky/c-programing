/*Q21 Write a program that replaces a substring with another string in a given line of text.*/

#include<stdio.h>
#include<string.h>

void replace_substring(char *str, char *old_sub, char *new_sub){
    char *p;
    int len_old = strlen(old_sub);
    int len_new = strlen(new_sub);
    for(p = strstr(str, old_sub); p != NULL; p = strstr(p + len_new, old_sub)){
        memmove(p + len_new, p + len_old, strlen(p + len_old) + 1);
        memcpy(p, new_sub, len_new);
    }
}

int main(){
    char line[100];
    char old_sub[20], new_sub[20];
    printf("Enter a line of text: ");
    fgets(line, 100, stdin);
    printf("Enter old substring: ");
    scanf("%s", old_sub);
    printf("Enter new substring: ");
    scanf("%s", new_sub);
    replace_substring(line, old_sub, new_sub);
    printf("Modified line: %s\n", line);
    return 0;
}