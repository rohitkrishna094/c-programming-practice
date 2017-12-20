#include<stdio.h>
#include<conio.h>
int Add(int a, int b);
int main(void)
{
	int a,b;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("The sum of %d and %d is %d.",a,b,Add(a,b));
}
int Add(int a, int b)
{
	return (a+b);
}
