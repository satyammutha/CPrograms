#include<stdio.h>
#include<conio.h>
int main()
{
	float pie,r,area;
	pie = 3.14;
	printf("Find out Area of Circle");
	printf("\nEnter value of the radius:");
	scanf("%f",&r);
	area = pie*r*r;
	printf("Area of Circle:%3.2f",area);
	getch();
}