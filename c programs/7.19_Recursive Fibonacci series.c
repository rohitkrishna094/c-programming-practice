#include<stdio.h>

int fib(int n);

int main(void)
{
	int n,i;
	printf("Enter the series size:");
	scanf("%d",&n);
	if(n<2)
	{
		n==2;
	}
	printf("First %d Fibonacci numbers are:\n\n",n);
	for(i=0;i<=n;i++)
	{
		printf("%d ",fib(i));
	}
}

int fib(int n)
{
	if(n==0 || n==1)
	{
		return n;
	}
	return (fib(n-1)+fib(n-2));
}
