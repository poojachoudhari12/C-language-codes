#include<stdio.h>
int power(int a,int b)
{
	if(b==0) return 1;
	return a*power(a,b-1);
}
int main()
{
	int a,b;
	printf("enter the base value:");
	scanf("%d",&a);
	printf("enter the power:");
	scanf("%d",&b);
	int p=power(a,b);
	printf("%d raised to %d is %d",a,b,p);
	return 0;
}