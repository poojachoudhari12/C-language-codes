#include<stdio.h>
#include<math.h>

float areaoftriangle(float base,float height)
{
	return(0.5*base*height);
}

float areaofcircle(float radius)
{
	return(3.14*radius*radius);
}

float areaofrectangle(float length,float breadth)
{
	return(length*breadth);
}







void main()
{
	int choice;
	float result=0;
	
	printf("choose any shape to calculate its area:\n");
	printf("1.triangle\n");
	printf("2.circle\n");
	printf("3.rectangle\n");
	
	printf("enter your choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			{
				float base,height;
				printf("enter the base and height of triangle:\n");
				scanf("%f %f",&base,&height);
				result=areaoftriangle(base,height);
				break;
			}
		case 2:
			{
				float radius;
				printf("enter the radius of circle:\n");
				scanf("%f",&radius);
				result=areaofcircle(radius);
				break;
			}
		case 3:
			{
				float length,breadth;
				printf("enter the length and breadth of rectangle:\n");
				scanf("%f %f",&length,&breadth);
				
			}
		default:
			printf("invalide choice \n");
			return 1;		
	}
	printf("the area is %2f\n",result);
	return 0;
}