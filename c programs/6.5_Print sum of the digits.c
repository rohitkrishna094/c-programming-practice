#include<stdio.h>
#include<conio.h>
int main(void)
{
	int i,n,sum=0;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{
		sum=sum+(n%10);
		n=n/10;
	}
	printf("The sum of the digits of the number that you have entered is:%d",sum);
	getch();
}
