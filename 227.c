#include <stdio.h>
#include <string.h>

void sortWords(char *str) {
    char *words[100];
    int count = 0;
    char temp[50];

    char *token = strtok(str, " ");
    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(words[i], words[j]) > 0) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("Sorted words:\n");
    for (int i = 0; i < count; i++) {
        printf("%s ", words[i]);
    }
    printf("\n");
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);  
    sortWords(str);

    return 0;
}

