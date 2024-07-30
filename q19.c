#include<stdio.h>
void displayandsumofoddno(int n)
{
	int sum=0;
	int i;
	printf("the odd numbers are:");
	for(i=1;i<n;i++)
	{
		printf("\n%d",2*i-1);
		sum=sum+2*i-1;
	}
	printf("\nthe sum of odd nataral number upto %d is:%d",n,sum);
	return;
	
}
int main()
{
	int n;
	int i;
	printf("enter number :");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("\n invalive input,it should be positive integer");
		return 1;
	}
	displayandsumofoddno(n);
	return 0;
}