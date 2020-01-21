#include<stdio.h>
#include<conio.h>
int main()
{
	float area,b,h;
	printf("::Area of Triangle::");
	printf("\nEnter breadth value:");
	scanf("%f",&b);
	printf("\nEnter height value:");
	scanf("%f",&h);
	area = 0.5*b*h;
	printf("Area of Triangle is:%3.2f", area);
}