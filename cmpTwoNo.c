#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2;
	printf("Enter two nos for Compare:");
	scanf("%d%d",&n1,&n2);
	if(n1==n2)
	{
	printf("Same no");
	}
	else if(n1>n2)
	{
	printf("Number 1 is greater than other");
	}
	else
	{
	printf("Number 2 is greater than other");
	}
}