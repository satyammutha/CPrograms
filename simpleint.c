#include<stdio.h>
#include<stdio.h>
int main()
{
	int p;
	float n,r,si;
	printf("::Calculate Simple Interest::");
	printf("\n Enter Principle Amount:");
	scanf("%d",&p);
	printf("\nEnter period:");
	scanf("%f",&n);
	printf("\nEnter rate:");
	scanf("%f",&r);
	si = (p*n*r)/100;
	printf("Simple Interest on Principle=%d by Rate=%3.2f For=%3.2f\n%3.2f",p,r,n,si);
}