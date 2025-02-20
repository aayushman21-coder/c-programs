#include <stdio.h>

void printSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    printf("The sum of the elements in the array is: %d\n", sum);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    printSum(arr, size);

    return 0;
}

