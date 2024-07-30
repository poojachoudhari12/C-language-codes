#include<stdio.h>
void main()
{
	int i=0,n,j=0,pos,temp;
	char s[15];
	char *p[5];
	printf("\nenter the city name:");
	for(i=0;i<5;i++)
	{
		gets(s);
		n=strlen(s)+1;
		*(p+i)=(char*)malloc(n*sizeof(char));
		strcpy(p[i],s);
		
	}
	printf("\n before sorting");
	for(i=0;i<5;i++)
	{
		puts(*(p+i));
	}
	for(i=0;i<4;i++)
	{
		pos=i;
		for(j=i+1;j<5;j++)
		{
			if(strcmp(p[j],p[pos])<0)
			pos=j;
		}
		if(i!=pos)
		{
			temp=p[i];
			p[i]=p[pos];
			p[pos]=temp;
		}
	}
	printf("\n after sorting");
	for(i=0;i<5;i++)
	{
		puts(*(p+i));
		free(p[i]);
	}
	return;
}