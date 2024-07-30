#include<stdio.h>
void main()
{
	int x[10],i,j,pos,temp;
	printf("enter the elements of array:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("\nthe array before sorting:");
	for(i=0;i<10;i++)
	{
		printf("%4d",x[i]);
	}
	for(i=0;i<10;i++)
	{
		pos=i;
		for(j=i+1;j<10;j++)
		{
			if(x[j]>x[pos])
			pos=j;
		}
		if(i!=pos)
		{
			temp=x[i];
			x[i]=x[pos];
			x[pos]=temp;
		}
		
	}
	printf("\nthe array after sorting:");
	for(i=0;i<10;i++)
	{
		printf("%4d",x[i]);
	}
	return;
	
}