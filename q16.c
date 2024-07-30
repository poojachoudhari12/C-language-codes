#include<stdio.h>
long int decimaltobinary(long int n)
int main()
{
	long int binary,decimal;
	printf("enter decimal no. :");
	scanf("%ld",&decimal);
	
	binary=decimaltobinary(decimal);
	printf("\n decimal (%ld):binary (%ld)",decimal,binary);
	return 0;
	
}
long int decimaltobinary(long int n)
{
	long int binary=0;rem,base=1,num;
	num=n;
	while(n!=0)
	{
		rem=num%2;
		binary=binary+base*rem;
		base=base*10;
		num=num/2;
	}
	return binary;
}