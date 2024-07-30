#include<stdio.h>
int isleapyear(int year)
{
	if((year%4==0&&year%100!=0)||year%400==0)
		{	
			return 1;
		}
	else
	{
		return 0;
		}	
}

int main()
{
	int year;
	printf("enter year:");
	scanf("%d",&year);
	if(isleapyear(year))
	{
		printf("\n %d is leap year\n",year);
	}
	else
	printf("%d is not leap year",year);
	return 0;
}