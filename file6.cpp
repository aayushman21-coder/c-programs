//C program to write text (characters) into file and print.

#include<stdio.h>
int main()
{
 
    FILE *fp;   
    char fName[20];
 
    printf("Enter file name to create :");
    scanf("%s",fName);
 
    
    fp=fopen(fName,"w");
    printf("File created successfully.");
    putc('A',fp);
    putc('B',fp);
    putc('C',fp);
 
    printf("\nData written successfully.");
    fclose(fp);
    
    fp=fopen(fName,"r");
    
 
    printf("Contents of file is :\n");
    printf("%c",getc(fp));
    printf("%c",getc(fp));
    printf("%c",getc(fp));
 
    fclose(fp);
    return 0;
}
