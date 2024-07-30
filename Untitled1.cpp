#include<stdio.h>
int main()
{
	FILE *fc;
	int flg=0,n;
	char s[30],scity[30];
	fc=fopen("city.txt","r");
	if(fc==NULL)
	{
		printf("\nfile not found");
		return 0;
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
	return 0;		
	
}