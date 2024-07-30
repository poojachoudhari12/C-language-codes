#include<stdio.h>
void main()
{
	int x[10],i,j,cnt=0;
	printf("enter the elements of array:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(x[i]==x[j])
			{
				cnt++;
				break;
			}
		}
	}
	printf("\nthe no of dublicate no in array are:%d",cnt);
	return;
}