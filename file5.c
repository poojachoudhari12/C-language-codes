#include<stdio.h>
void main()
{
	FILE *fc;
	int flg=0,n;
	char s[30],scity[30];
	fc=fopen("city.text","r");
	if(fc==NULL)
	{
		printf("\nfile not found");
		return;
	}
	printf("\nenter city name to search:");
	gets(scity);
	while(1)
	{
		fgets(s,29,fc);
		if(feof(fc))
		break;
		n=strlen(s);
		n--;
		s[n]='\0';
		if(strcmp(s,scity)==0)
		{
			flg=1;
			break;
		}
		
	}
	fclose(fc);
	if(flg==1)
		printf("\nfound");
	else
		printf("\nnot found");
	return;		
	
}