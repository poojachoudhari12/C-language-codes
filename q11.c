#include<stdio.h>
void main()
{
	int x[3][3],i,j;
	printf("enter the elements of matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%4d",&x[i][j]);
		}
	}
	printf("\n formed matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%4d",x[i][j]);
		}
		printf("\n");
	}
	printf("\n matrix after transpose:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%4d",x[j][i]);
		}
		printf("\n");
	}
	printf("\nmatri formed by replacing diagoal elements by one\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				printf("%4d",1);
			}
			else
			{
				printf("%4d",x[i][j]);
			}
		}
		printf("\n");
	}
	printf("\nmatri upper diagoal elements by zero\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i<j)
			{
				printf("%4d",0);
			}
			else
			{
				printf("%4d",x[i][j]);
			}
		}
		printf("\n");
	}
	
	return;
	
}