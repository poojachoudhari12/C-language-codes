#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q;
	
	printf("enter row & coloumn of a matrix:\n");
	scanf("%d %d",&n,&m);
	printf("%d %d\n",n,m);
	
	printf("\nenter row & coloumn of matrix:\n");
	scanf("%d %d",&p,&q);
	printf("%d %d\n",p,q);
	
	if((n==p)&&(m==q))
	{
		printf("\n input matrix a:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("\nmatrix a\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("%4d",a[i][j]);
			}
			printf("\n");
		}
			printf("\n input matrix b:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		printf("\nmatrix b\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("%4d",b[i][j]);
			}
			printf("\n");
		}
		//adition
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
			}
		}
		printf(" sum of a & b matrix:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("%4d",c[i][j]);
			}
			printf("\n");
		}
		//subtraction
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				c[i][j]=a[i][j]-b[i][j];
			}
		}
		printf(" subtract of a & b matrix:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("%4d",c[i][j]);
			}
			printf("\n");
		}
	
		}
		
		
	else
	{
		printf("\nmatrix can not be add,sub\n");
		
	}
	return;
}