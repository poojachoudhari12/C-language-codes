#include<stdio.h>
int findlarger(int *num1,int *num2)
{
	if(*num1>*num2)
		printf("\n %d is larger",*num1);
	else
		printf("\n %d is larger",*num2);
	return 0;
			
}
int main()
{
	int num1,num2;
	printf("enter two number:");
	scanf("%d %d",&num1,&num2);
	int larger =findlarger(&num1,&num2);
	printf("\nthe larger number is :%d",larger);
	return 0;
}


