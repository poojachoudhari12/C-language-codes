#include<stdio.h>
typedef struct student
{
	int rno;
	char nm[15];
	int mrk;
}STU;
void main()
{
	FILE *fs;
	STU s;
	fs=fopen("stu.dat","rb");
	if(fs==NULL)
	{
		printf("\n mising file");
		return;
	}
	while(1)
	{
		fread(&s,sizeof(STU),1,fs);
		if(feof(fs))
			break;
		printf("\n%5d %-15s %5d",s.rno,s.nm,s.mrk);
	}
	fclose(fs);
	return;
}
