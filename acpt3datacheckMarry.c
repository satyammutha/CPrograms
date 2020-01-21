#include<stdio.h>
#include<conio.h>
int main()
{
	char mstatus,gen;
	int age;
	printf("Enter Your Marital Status,Gender,Age:(e.g. m,f,25):\n");
	scanf("%c,%c,%d",&mstatus,&gen,&age);
	if(mstatus=='m')
	{
		printf("You can not marry");
	}
	else if(mstatus=='u')
	{
		if(gen=='m')
		{
			if(age>=21)
			{
			printf("You can marry");
			}
			else
			{
			printf("You can NOT marry");
			}
		}
		if(gen=='f')
		{
			if(age>=18)
			{
			printf("You can marry");
			}
			else
			{
			printf("You can NOT marry");
			}
		}	
	}
	else
	{
	printf("Invalid Input");
	}
}
	