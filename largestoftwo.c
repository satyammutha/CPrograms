#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter two nos:");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
	printf("A is greater number");
	}
	else if(b>a)
	{
	printf("B is greater number");
	}
	else
	{
	printf("\nNumbers are same or invalid");
	}
	
	printf("\nUsing Conditional Operator:");
	a>b?printf("\nA is greater no"):printf("\nB is greater no");
}