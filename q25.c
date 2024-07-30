#include<stdio.h>
#include<ctype.h>
int isalphabate(char ch)
{
	return isalpha(ch);
}


int main()
{
	char ch;
	printf("enter character:");
	scanf("%c",&ch);
	
	if(isalphabate(ch))
	{
		printf("%c is an alphabete ",ch);
		
	}
	else
	{
		printf("%c is not alphabate",ch);
	}
	return 0;
}