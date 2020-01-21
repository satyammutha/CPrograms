#include<stdio.h>
#include<conio.h>
int main()
{
	int id,s1,s2,s3,grade;
	float avg;
	printf("Enter id:");
	scanf("%d",&id);
	printf("Enter Marks of 3 Subjects:");
	scanf("%d%d%d",&s1,&s2,&s3);
	avg=(s1+s2+s3)/3.0;
	printf("Your ID=%d\n",id);
	if(avg>=60)
	{
		printf("Grade is A");
	}else if(60>avg>=50)
	{
		printf("Grade is B");
	}else if(50>avg>=40)
	{
		printf("Grade is C");
	}else if(avg<50)
	{
		printf("Grade is F");
	}
	else
	{
	printf("Wrong Input");
	}
}