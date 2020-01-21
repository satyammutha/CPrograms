#include<stdio.h>
#include<conio.h>
int main()
{
	int s1,s2,s3,total;
	float avg;
	printf("::Total of Marks and Average::");
	printf("Enter Marks:\nSub-1,Sub-2,Sub-3:");
	scanf("%d%d%d",&s1,&s2,&s3);
	total = s1+s2+s3;
	avg = total/3;
	printf("Total Marks of 3 Subjects:%d",total);
	printf("\nAverage:%3.2f",avg);
}