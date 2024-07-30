#include<stdio.h>
void main()
{
	int x[10],i,max,min;
	printf("enter the elemnets of array:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("\n the elements of array are:");
	for(i=0;i<10;i++)
	{
		printf("%4d",x[i]);
	}
	max=min=x[0];
	for(i=0;i<10;i++)
	{
		if(x[i]>max)
			max=x[i];
		else
		{
			if(x[i]<min)
			min=x[i];
	    }
	    
	}
	printf("\nmaxi number from array:%d\n min number from array:%d",max,min);
	return;
}