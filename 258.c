#include <stdio.h>

void swapArrays(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

int main() {
    int size = 5; 
    int arr1[] = {1, 2, 3, 4, 5}; 
    int arr2[] = {6, 7, 8, 9, 10}; 

    printf("Array 1 before swapping: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Array 2 before swapping: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    swapArrays(arr1, arr2, size);

    printf("Array 1 after swapping: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Array 2 after swapping: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}

