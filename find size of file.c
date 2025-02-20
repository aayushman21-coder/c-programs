//101.	C program to find the size of a file
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char filename[100];
    long int size;
    printf("Enter the filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("File not found\n");
        exit(1);
    }
    fseek(fp, 0, 2);
    size = ftell(fp);
    printf("Size of the file: %ld bytes\n", size);
    fclose(fp);
    return 0;
}