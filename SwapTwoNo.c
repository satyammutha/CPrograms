#include<stdio.h>
#include<conio.h>
int main()
{
	int a=22;
	int b=60;
	int temp;
	printf("Before Swapping:");
	printf("\nA=%d\tB=%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter Swapping:");
	printf("\nA=%d\tB=%d",a,b);
	
	printf("\n::Swapping wo/ temp::");
	printf("Before Swapping:");
	printf("\nA=%d\tB=%d",a,b);
	a= a+b;
	b= a-b;
	a= b-a;
	printf("\nAfter Swapping wo/ temp:");
	printf("\nA=%d\tB=%d",a,b);
	
}