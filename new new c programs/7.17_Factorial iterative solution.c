#include<stdio.h>

long int factorial(int a);

int main(void)
{
	int a;
	printf("Enter the number:")	;
	scanf("%d",&a);
	printf("%d",factorial(a));
}

long int factorial(int a)
{
	int i,fact=1;
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	return fact;
}
