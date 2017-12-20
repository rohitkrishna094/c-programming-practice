#include<stdio.h>

int factorial(int a);

int main(void)
{
	int a;
	printf("Enter the number:");
	scanf("%d",&a);
	printf("%d",factorial(a));
}

int factorial(int a)
{
	if(a==0)
	{
		return 1;
	}
	else
	{
		return (a*factorial(a-1));
	}
}
