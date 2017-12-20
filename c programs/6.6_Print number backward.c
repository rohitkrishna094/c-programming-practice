#include<stdio.h>
#include<conio.h>
int main(void)
{
	int i,n,digit;
	printf("Enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		digit=n%10;
		printf("%d",digit);
		n=n/10;
	}
}
