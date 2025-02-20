#include<stdio.h>
int main()
{
FILE *fptr;
fptr = fopen("filec.txt", "r");
int count=0;

if(fptr==NULL)
{
printf("File can`t be open.");
}
else
while(fgetc(fptr) != EOF)
{
count++;
}

printf("The number of characters in a file is %d.", count-1);

fclose(fptr);

return 0;
}


