#include<stdio.h>
int sumofdigit(int n)
{
	int sum=0,rem;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("\nth sum of digits is:%d",sum);
	return 0;
	
}

int reversenumber(int n)
{
	int rem,sum=0;
	while(n>0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	printf("\n reverse number  is:%d",sum);
	return;
}
void main()
{
	int n;
	printf("enter number:");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("\n invalide input");
		return 1;
	}
	sumofdigit(n);
	reversenumber(n);
	return;
}