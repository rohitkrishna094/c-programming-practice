#include<stdio.h>
int main(void)
{
	float num;
	int x;
	printf("Enter the floating point number:");
	scanf("%f",&num);
	x=(int) num;
	x=x%10;
	printf("\nThe rightmost digit of the integral portion of the floating point that you have entered is:%d",x);
}
