#include<stdio.h>
int calculatesum(int arr[],int size)
{
	int sum=0;
	int i;
	for(i=0;i<size;i++)
	{
		sum=sum+arr[i];
		
	}
	return sum;
}

float calculateavg(int arr[],int size)
{
	int sum=calculatesum(arr,size);
	return(float)sum/size;
}

int main()
{
	int number[10];
	int i;
	printf("enter 10 numbers:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&number[i]);
	}
	int sum=calculatesum(number,10);
	float avg=calculateavg(number,10);
	printf("\nsum of number :%d\navg of number :%2f",sum,avg);
	return 0;
}