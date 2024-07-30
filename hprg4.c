#include<stdio.h>
void main()
{
	int a[5];
	int i,pcnt=0,ncnt=0,zcnt=0;
	printf("enter the elements of array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>0)
			pcnt++;
		else
		{
			if(a[i]<0)
				ncnt++;
			else
				zcnt++;
		}	
	}
	printf("the elements of array are:");
	for(i=0;i<5;i++)
	{
		printf("%4d",a[i]);
	}
	printf("\n the no of positive no is:%d",pcnt);
	printf("\n the no of negative no is:%d",ncnt);
	printf("\n the no of zero no is:%d",zcnt);
	
	return;
}