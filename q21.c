#include<stdio.h>
int armstrong(int n)
{
	int dig,cube,sum=0,temp;
	temp=n;
	while(temp>0)
	{
		dig=temp%10;
		cube=dig*dig*dig;
		sum=sum+cube;
		temp=temp/10;
	}
	if(n==sum)
	 
		printf("arm strong no. :%d",n);
	else
		printf("not a armstrong no");	
		return 0;
		
	
}
void main()
{
	int n;
	printf("enter no:");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("\n invlide input");
		return;
	}
	armstrong(n);
	return;
}