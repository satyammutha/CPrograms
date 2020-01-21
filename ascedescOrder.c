#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter nos to get Ascending And Descending Order:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b && a>=c)
	{
		if(b>c)
		{
			printf("Ascending Order:\n%d\t%d\t%d",c,b,a);
			printf("\nDescending Order:\n%d\t%d\t%d",a,b,c);
		}
		else
		{
			printf("Ascending Order:\n%d\t%d\t%d",b,c,a);
			printf("\nDescending Order:\n%d\t%d\t%d",a,c,b);
		}
	}
	if(b>=a && b>=c)
	{
		if(a>c)
		{
			printf("Ascending Order:\n%d\t%d\t%d",c,a,b);
			printf("\nDescending Order:\n%d\t%d\t%d",b,a,c);
		}
		else
		{
			printf("Ascending Order:\n%d\t%d\t%d",a,c,b);
			printf("\nDescending Order:\n%d\t%d\t%d",b,c,a);
		}
	}
	if(c>=a && c>=b)
	{
		if(a>b)
		{
			printf("Ascending Order:\n%d\t%d\t%d",b,a,c);
			printf("\nDescending Order:\n%d\t%d\t%d",b,a,c);
		}
		else
		{
			printf("Ascending Order:\n%d\t%d\t%d",a,b,c);
			printf("\nDescending Order:\n%d\t%d\t%d",c,b,a);	
		}
	}
}