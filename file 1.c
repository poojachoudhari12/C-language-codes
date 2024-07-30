
#include<stdio.h>
void main()
{
	FILE *f1;
	char ch;
	f1=fopen("abc.txt","w");
	printf("\n type a character\n");
	while(1)
	{
		scanf("%c",&ch);
		if(ch=='*')
			break;
		fputc(ch,f1);
	}
	fclose(f1);
	return;
}