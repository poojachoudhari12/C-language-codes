#include<stdio.h>
void display()
{
	printf("\npooja \n");
	return;
}
void main()
{
	void (*ptr)();
	ptr=display;
	(*ptr)();
	return;
}