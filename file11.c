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
	int no;
	fs=fopen("stu.dat","wb");
	while(1)
	{
		printf("\n enter the roll no:");
		scanf("%d",&no);
		if(no==0)
		break;
		s.rno=no;
		printf("\n enter name:");
		scanf("%s",s.nm);
		printf("\n enter marks:");
		scanf("%d",&s.mrk);
		fwrite(&s,sizeof(STU),1,fs);
		
	}
	fclose(fs);
	return;
}