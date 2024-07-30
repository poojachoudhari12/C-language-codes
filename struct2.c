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
	struct student *ptr;
	ptr=&s;
	printf("\nroll no:");
	scanf("%d",&ptr->rno);
	printf("\n name:");
	scanf("%s",&ptr->nm);
	printf("\nmarks:");
	scanf("%d",&ptr->mrk);
	printf("\n student record\nroll no:%d\n name:%s\n marks:%d",ptr->rno,ptr->nm,ptr->mrk);
	return;
}