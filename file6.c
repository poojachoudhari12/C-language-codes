#include<stdio.h>

void main()
{
	FILE *f1;
	char a[80];
	f1=fopen("city.text","w");
	while(1)
	{
		printf("\nenter city name\n");
		gets(a);
		if(strcmp(a,"stop")==0)
		break;
		fputs(a,f1);
		fputs("\n",f1);
		
	}
	fclose(f1);
	return;
	}