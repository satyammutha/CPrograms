#include<stdio.h>
#include<conio.h>
int main()
{
	int no;
	printf("To check no is even or odd");
	printf("\nEnter a no to Check:");
	scanf("%d", &no);
	if(no%2==0)
	{
	printf("Number is even");
	}
	else
	{
	printf("Number is odd");
	}
}