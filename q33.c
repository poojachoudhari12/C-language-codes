#include<stdio.h>
int fibonacci(int n)
{
	if(n<=0) return -1;
	if(n==1) return 0;
	else if(n==2) return 1;
	else return fibonacci(n-1)+fibonacci(n-2);
}
void main()
{
	int n,i;
	printf("enter the number upto which fibo number is calculated ");
	scanf("%d",&n);
	if(n<=0){
		printf("invalide input ");
		return 1;
	}
	printf("fibo series upto %d is:",n);
	for(i=0;i<n;i++)
	{
		printf("%d",fibonacci(i));
		printf("\n");
	}
	
	
}