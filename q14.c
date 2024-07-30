#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10],i,j,k,m,n,p,q;
	printf("enter the size of row & coloumn of a:\n");
	scanf("%d %d",&m,&n);
	
	printf("enter the size of row and coloumn of b:\n");
	scanf("%d %d",&p,&q);
	
	if(n==p)
	{
		printf("\nmatrix multiplication takes place\n");
		printf("\ninput matrix a:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
			printf("\n");
		}
		printf("\n matrix a:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%4d",a[i][j]);
			}
			printf("\n");
		}
			printf("\ninput matrix b:\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				scanf("%d",&b[i][j]);
			}
			printf("\n");
		}
		printf("\n matrix b:\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				printf("%4d",b[i][j]);
			}
			printf("\n");
		}
		//multi 
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				c[i][j]=0;
				for(k=0;k<n;k++)
				{
					c[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
		printf("\n matrix multi of a & b matrix\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				printf("%4d",c[i][j]);
			}
			printf("\n");
		}
		
	}
	else
	{
		printf("\n matrix multiplication is not possible \n");
	}
	return;
}