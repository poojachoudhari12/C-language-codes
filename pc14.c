#include<stdio.h>
int isprime()
{
	int no,i=2;
	printf("\nenter no for prime:");
	scanf("%d",&no);
	while(i<no)
	{
		if(no%i==0)
		break;
		i++;
	}
	if(i==no)
		return 1;
	else
		return 0;
	
}
int ispalindrome(int no)
{
	int temp=no,rev=0,dig;
	while(temp>0)
	{
		dig=temp%10;
		rev=rev*10+dig;
		temp/=10;
		
	 } 
	 if(rev==no)
	 	return 1;
	 else
	 	return 0;
}
void main()
{
	int (*p)();
	int (*q)(int);
	int no,res;
	printf("\nenter no:");
	scanf("%d",&no);
	p=isprime;
	if((*p)()==0)
		printf("\nnot prime");
	else
		printf("\nprime");
	q=ispalindrome;
	if((*q)(no)==1)
		printf("\npalindrome");
	else
		printf("\n not palindrome");
	return;
}