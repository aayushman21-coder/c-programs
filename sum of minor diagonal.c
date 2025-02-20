#include<stdio.h>
int main()
{
	int i,j,a[3][3],b=0,c=2,sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("Enter in position [%d][%d]",i,j);
		scanf("%d", &a[i][j]);
		}
	}
	printf("The matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
		
		
		sum+=a[c][b];
		c--;
		b++;
		}
		printf("\n");
	
	printf("sum of minor diagonal: %d",sum);
	return 0;
}
