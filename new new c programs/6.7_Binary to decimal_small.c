#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(void)
{
	int b,i,digit,n=0,exp=0;
	printf("Please enter a binary number only:");
	scanf("%d",&b);
	while(b!=0)
	{
		digit=b%10;
		exp++;
		if(digit==1)
		{
			n=n+pow(2,(exp-1));	
		}
		b=b/10;
	}
	printf("The decimal number is:%d",n);
}
