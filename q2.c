#include<stdio.h>
void main()
{
	int x[5],i,j,temp;
	printf("enter data:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("\n before process array data:");
	for(i=0;i<5;i++)
	
		printf("%4d",x[i]);
	
	for(i=0,j=4;i<j;i++,j--)
	{
		temp=x[i];
		x[i]=x[j];
		x[j]=temp;
	}
	printf("\n after process array data:");
	for(i=0;i<5;i++)
	printf("%4d",x[i]);
	return;
}
	
	
	
	
	
	
	
	
	
	
	
