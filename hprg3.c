#include<stdio.h>
void main()
{
	int a[10],i,tot=0,avg;
	printf("\nenter the elements of array:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		tot=tot+a[i];
	}
	printf("\n the elements of array are:");
	for(i=0;i<10;i++)
	{
		printf("%4d",a[i]);
	}
	avg=tot/10;
	printf("\nthe sum of elements of array are:%d",tot);
	printf("\nthe avg of elements of array are:%d",avg);
}