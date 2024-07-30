#include<stdio.h>
void main()
{
	int a[10];
	int i,scnt=0,sv;
	printf("\nenter the elements of arrray:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter search elements:");
	scanf("%d",&sv);
	for(i=0;i<10;i++)
	{
		if(a[i]==sv)
		scnt++;
	}
	if(scnt==0)
	{
		printf("\n search value is not found");
		
	}
	printf("\n the %d is repeted %d times",sv,scnt);
	return;

}