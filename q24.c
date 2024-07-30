#include<stdio.h>
int checknumber(int n)
{
	if(n>0)
	printf("number is positive");
	else
	{
		if(n<0)
		{
			printf("number is negative");
		}
		else
		{
			printf("number is zero");
		}
	}
	return;
}
int main()
{
	int n;
	printf("enter number:");
	scanf("%d",&n);
	
	checknumber(n);
	return 0;
}