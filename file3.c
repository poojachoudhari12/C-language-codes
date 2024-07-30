#include<stdio.h>
void main()
{
	FILE *f1,*f2;
	char ch;
	f1=fopen("abc.txt","r");
	if(f1==NULL)
	{
		printf("\nfile is not found");
		return;
	}
	f2=fopen("pqr.txt","w");
	 while(1)
	 {
		ch=fgetc(f1);
		if(feof(f1))
		break;
		fputc(ch,f2);
	 }
	 fclose(f1);
	 fclose(f2);
	 return;
}
