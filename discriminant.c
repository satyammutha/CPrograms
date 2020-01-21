#include<stdio.h>
#include<conio.h>
int main()
{
	float a,b,c,x,r1,r2;
	printf("Enter Value of A,B,C:");
	scanf("%f%f%f",&a,&b,&c);
	x=b*b-4*a*c;
	r1=(-b+x)/2*a;
	r2=(-b-x)/2*a;
	if(x>0)
	{
		printf("\nRoots are unequal\n");
	}else if(x<0)
	{
		printf("\nRoots are imaginary\n");	
	}
	else
	{
		printf("\nRoots are same\n");
	}
	printf("\nR1=%f\n",r1);
	printf("\nR2=%f\n",r2);
}