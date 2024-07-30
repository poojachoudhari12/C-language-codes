#include<stdio.h>

int gcd(int a,int b)
{
	int temp;
	while(b!=0)
	{
	temp=b;
	b=a%b;
	a=temp;
	}
	return a;
}
void main()
{
	int num1,num2;
	printf("enter num1,num2:");
	scanf("%d %d",&num1,&num2);
	int result=gcd(num1,num2);
	printf("\n the gcd of %d and %d:%d\n",num1,num2,result);
	return 0;
	
}