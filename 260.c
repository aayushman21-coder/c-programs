#include <stdio.h>

void printStrings(char *arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("String %d: %s\n", i + 1, arr[i]);
    }
}

int main() {
    char *arr[] = {"Hello", "World", "Welcome", "to", "C programming"};
    int size = sizeof(arr) / sizeof(arr[0]);

    printStrings(arr, size);

    return 0;
}

