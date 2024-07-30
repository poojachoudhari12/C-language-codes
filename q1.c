#include<stdio.h>
void main()
{
	int arr[5];
	int i=0;
	printf("\nenter data:");
	while(i<5)
	{
		scanf("%d",&arr[i]);
		i++;
	}
	printf("\narray data:");
	for(i=0;i<5;i++)
		printf("%4d",arr[i]);
	return;
}