#include<stdio.h>
#include<conio.h>
int main()
{
	int no;
	printf("Enter a no to Check gt lt than 10:");
	scanf("%d",&no);
	if(no!=10){
	if(no>10)
	{
	printf("No is greater than 10");
	}
	else if(no<10)
	{
	printf("No is less than 10");
	}
	else
	{
	printf("Number is invalid");
	} 
	}
	else{printf("Number is same");}
}