#include<stdio.h>
void main()
{
	FILE *f1;
	char a[80];
	f1=fopen("note.txt","r");
	if(f1==NULL)
	{
		printf("\nfile not found");
		return;
	}
	printf("\ndata\n");
	while(1)
	{
		fgets(a,79,f1);
		if(feof(f1))
			break;
		puts(a);
			
	}
	fclose(f1);
	return;
}