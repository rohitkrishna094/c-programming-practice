#include<stdio.h>
#include<conio.h>

int printLSD(int x);

int main(void)
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("The least significant digit of %d is %d.",n,printLSD(n));
}

int printLSD(int x)
{
	return (x%10);
}
