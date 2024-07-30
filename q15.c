#include<stdio.h>
void main()
{
	int a[10][10],i,j,m,n,sum=0,rowsum,colsum;
	
	printf("enter row & coloumn of a matrix:\n");
	scanf("%d %d",&n,&m);
	printf("%d %d\n",n,m);
	
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
		
		//sum of elements
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				sum=sum+a[i][j];
			}
		}
		printf("\n sum of elements:%d",sum);
		
		for(i=0;i<n;i++)
		{
			int rowsum=0;
			for(j=0;j<m;j++)
			{
				rowsum=rowsum+a[i][j];
			}
			printf("\n sum of row %d elements %d",i,rowsum);
			
		}
		
		for(j=0;j<m;j++)
		
		{
			int colsum=0;
			for(i=0;i<n;i++)
			{
				colsum=colsum+a[i][j];
				
			}
			printf("\n sum of coloumn %d elements %d",j,colsum);
			
		}
	return;	
}