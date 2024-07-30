#include<stdio.h>
#include<math.h>
float calculateaverageandvariance(const int marks[],int n,float*average,float*variance)
{
	int sum=0,i;
	for(i=0;i<n;i++)
	{
		sum=sum+marks[i];
	}
	*average=(float)sum/n;
	
	float sumsquaredifference=0;
	for(i=0;i<n;i++)
	{
		sumsquaredifference+=pow(marks[i]-*average,2);
		
	}
	*variance=sumsquaredifference/n;
}
void main()
{
	int n;
	printf("enter number of marks:");
	scanf("%d",&n);
	
	int marks[n],i;
	printf("\n enter marks:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&marks[i]);
		
	}
	float average,variance;
	calculateaverageandvariance(marks,n,&average,&variance);
	printf("\n average:%2f\n",average);
	printf("\n variance:%2f\n",variance);
	return 0;
}