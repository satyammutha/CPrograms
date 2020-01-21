#include<stdio.h>
#include<conio.h>
int main()
{
	int no;
	printf("Enter no to check divisible by 5:\t");
	scanf("%d", &no);
	if(no%5==0)
	{
	printf("It is divisible by 5");
	}
	else
	{
	printf("It is Not divisible by 5");
	}
}