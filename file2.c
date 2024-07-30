#include<stdio.h>
void main()
{
	FILE *f1;
	char ch;
	f1=fopen("abc.txt","r");
	if(f1==NULL)
	{
		printf("\nFILE not found");
		return;
	}
	printf("\ndata\n");
	while(1)
	{
		ch=fgetc(f1);
		if(feof(f1))
			break;
		printf("%c",ch);
			
	}
	fclose(f1);
	return;
	
}