#include<stdio.h>
#include<math.h>
float calculatehypotenuse(double side1,double side2)
{
	return sqrt(side1*side1+side2*side2);
}

int main()
{
	float side1,side2;
	printf("enter the length of side1 & side2:");
	scanf("%f %f",&side1,&side2);
	if(side1<=0||side2<=0)
	{
		printf("\n invalide input ");
		return 1;
	}
	else
	{
		float hypotenuse=calculatehypotenuse(side1,side2);
		printf("\nthe length of hypotenuse is:%f\n",hypotenuse);
	}
	return 0;
	
}