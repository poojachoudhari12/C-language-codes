#include<stdio.h>
void main()
{
	int a[5];
	int i,j,temp;
	printf("enter the elements of array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the elements of array before process are:");
	for(i=0;i<5;i++)
	{
		printf("%4d",a[i]);
	}
	for(i=0,j=4;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	printf("\nthe elements of array after process:");
	for(i=0;i<5;i++)
	{
		printf("%4d",a[i]);
	}
	
	return;
}