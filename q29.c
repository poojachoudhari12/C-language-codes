#include<stdio.h>
void main()
{
	int no1,no2;
	int *ptr1,*ptr2;
	int sum,sub,multi;
	float div;
	
	printf("enter two numbers:");
	scanf("%d %d",&no1,&no2);
	
	ptr1=&no1;
	ptr2=&no2;
	
	sum=(*ptr1)+(*ptr2);
	sub=(*ptr1)-(*ptr2);
	multi=(*ptr1)*(*ptr2);
	div=(*ptr1)/(*ptr2);
	
	printf("\nsum:%d",sum);
	printf("\nsub:%d",sub);
	printf("\nmulti:%d",multi);
	printf("\ndiv:%f",div);
	
	return;
}
	
	
	