#include<stdio.h>
void main()
{
	int x[4][4],i,j,sum=0;
	printf("enter the elements of matrix:");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	printf("\n the elements of matrix are:");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%4d",x[i][j]);
			
		}
		printf("\n");
	}
	printf("\nmatrix with lower triangle elements zero");
	for(i=0;i<4;i++)
	{
		printf("\n");
		for(j=0;j<4;j++)
		{
			
			if(i<=j)
			{
				printf("%4d",x[i][j]);
			}
			else
				{
					printf("%4d",0);
				}
		}
	}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i==j)
			{
				sum=sum+x[i][j];
			}
			
		}
	}
	printf("\n sum of diagonal elements:%d",sum);

	return;
	
}