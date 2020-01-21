#include<stdio.h>
#include<conio.h>
int main()
{
	int no,sq,c;
	printf("::Get Sqaure and Cube::");
	printf("\nEnter Number :");
	scanf("%d",&no);
	sq = no*no;
	c = no*no*no;
	printf("NO.%d\nSqaure is=%d\tCube is=%d",no,sq,c);
}