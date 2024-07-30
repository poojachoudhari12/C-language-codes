#include<stdio.h>
void main()
{
	int rno,mrk;
	char name[15];
	FILE *fs;
	fs=fopen("stu2023.txt","w");
	printf("\nstudent record");
	while(1)
	{
		printf("\n enter roll no:");
		scanf("%d",&rno);
		if(rno==0)
		break;
		printf("\n student name:");
		scanf("%s",name);
		printf("\n enter marks");
		scanf("%d",&mrk);
		fprintf(fs,"%d %s %d\n",rno,name,mrk);
	}
	fclose(fs);
	return;
}