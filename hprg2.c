#include<stdio.h>
void main()
{
	int a[5];
	int i;
	printf("enter the elements of array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the elements of array are:");
	for(i=0;i<5;i++)
	{
		printf("%4d",a[i]);
	}
	printf("\n reverse data");
	for(--i;i>=0;i--)
	printf("%4d",a[i]);
	
	return;
}