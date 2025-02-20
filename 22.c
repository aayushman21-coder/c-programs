#include <stdio.h>

int globalVar = 10;

void display() {
   
    int localVar = 5;

    printf("Inside display function:\n");
    printf("Global Variable: %d\n", globalVar);
    printf("Local Variable: %d\n", localVar);
}

int main() {
    int localVar = 20;
    printf("Inside main function:\n");
    printf("Global Variable: %d\n", globalVar);
    printf("Local Variable: %d\n", localVar);

    display();

    globalVar = 30;

    printf("Global Variable after modification: %d\n", globalVar);

    return 0;
}

