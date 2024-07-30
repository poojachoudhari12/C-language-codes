#include<stdio.h>
struct student
{
	int rno;
	char nm[15];
	int mrk;
	
};
	void main()
	{
		struct student s;
		printf("\nRoll no:");
		scanf("%d",&s.rno);
		printf("\nName:");
		scanf("%s",&s.nm);
		printf("\nMarks:");
		scanf("%d",&s.mrk);
		
		printf("\nstudent data:\n");
		printf("\nRoll No:%d",s.rno);
		printf("\nName:%s",s.nm);
		printf("\nMarks:%d",s.mrk);
		return;
		
	}