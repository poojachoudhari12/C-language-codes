#include<stdio.h>
void main()
{
	long int arr[10],Earr[10],Oarr[10];
	int i,j=0,k=0,n;
	
	printf("\n enter the size of array:");
	scanf("%d",&n);
	
	printf("\n enter the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%ld",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			Earr[j]=arr[i];
			j++;
		}
		else
		{
			Oarr[k]=arr[i];
			k++;
		}
	}
	printf("\nthe elements of even array are:");
	for(i=0;i<j;i++)
	{
		printf("%ld\n",Earr[i]);
		
	}
	printf("\n the elements of odd array:");
	for(i=0;i<k;i++)
	{
		printf("%ld\n",Oarr[i]);
	}
	return;
}