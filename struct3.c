#include<stdio.h>
typedef struct marks
{
	int rno;
	int phy,chem,math;
	
}MRK;

void main()
{
	MRK p[5];
	int i=0;
	while(i<5)
	{
		printf("\n data for %d student",i);
		printf("roll no:");
		scanf("%d",&p[i].rno);
		printf("mark\nphy:");
		scanf("%d",&p[i].phy);
		printf("marks\nchem:");
		scanf("%d",&p[i].chem);
		printf("marks\n math:");
		scanf("%d",&p[i].math);
		i++;
	}
	printf("\n records\n");
	for(i=0;i<5;i++)
	printf("%4d %4d %4d %4d ",p[i].rno,p[i].phy,p[i].chem,p[i].math);
	return;
}