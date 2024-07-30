#include<stdio.h>
void main()
{
	int rno,mrk;
	char name[15];
	FILE *fs;
	fs=fopen("stu2023.txt","r");
	if(fs==NULL)
	{
		printf("\n file not found");
		return 0;
	}
	printf("\n student record");
	while(1)
	{
		fscanf(fs,"%d %s %d",&rno,name,&mrk);
		if(feof(fs))
		break;
		printf("\nroll no:%d\n name:%s\n marks:%d",rno,name,mrk);
	}
	fclose(fs);
	return 0;
}