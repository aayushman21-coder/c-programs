//C program to write and read of employee in a file

#include<stdio.h>
int main()
{
	FILE *fp;
	int emp_id;
	char name[30],post[30];
	int i,n;
	
	printf("Enter no. of employees:");
	scanf("%d",&n);
	
	fp=fopen("emp.txt","w");
	
	for(i=0;i<n;i++)
	{
		printf("Enter employee ID: ");
		scanf("%d",&emp_id);
		
		printf("Enter name: ");
		scanf("%s",name);
		
		printf("Enter post: ");
		scanf("%s",post);
		
		fprintf(fp,"%d\t %s\t %s\n",emp_id,name,post);
	}
	fclose(fp);
	
	printf("Emp_ID\t Name\t Post\n");
	
	fp=fopen("emp.txt","r");
	while(fscanf(fp,"%d %s %s",&emp_id,name,post)!=EOF)
	{
		printf("%d\t %s\t %s\n",emp_id,name,post);
	}
	fclose(fp);
	return 0;
	
}
