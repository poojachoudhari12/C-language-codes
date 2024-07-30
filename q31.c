#include<stdio.h>
int factorial(int n)
{
	if(n==1) return 1;
	return n*factorial(n-1);
}
int mian()
{
	int n;
	printf("enter no:");
	scanf("%d",&n);
	
	int fact=factorial(n);
	printf("the factorial of %d is %d",n,fact);
	return 0;
}