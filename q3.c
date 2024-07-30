#include<stdio.h>
void main()
{
	int x[5],i,sum=0;
	printf("enter array data:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&x[i]);
		sum+=x[i];
	}
	printf("\narray data:");
	for(i=0;i<5;i++)
	printf("%4d",x[i]);
	printf("\nSum of array:%d",sum);
	return;
	
}