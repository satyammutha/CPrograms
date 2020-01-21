#include<stdio.h>
#include<conio.h>
int main()
{
	float no1,no2;
	printf("Enter no1:");
	scanf("%f", &no1);
	printf("Enter no2:");
	scanf("%f", &no2);
	printf("Addition is:%3.2f",(no1+no2));
	printf("\nSubtraction is:%3.2f",(no1-no2));
	printf("\nMultiplication is:%3.2f",(no1*no2));
	printf("\nDivision is:%3.2f",(no1/no2));
}