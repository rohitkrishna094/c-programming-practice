#include<stdio.h>
#include<conio.h>
int main(void)
{
	int a,d,n,tn,sn;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("\nEnter the common difference:");
	scanf("%d",&d);
	printf("\nEnter the value of n as in nth term:");
	scanf("%d",&n);
	tn=a+(n-1)*d;
	sn=(n/2)*((2*a)+(n-1)*d);
	printf("\nThe %dth term is %d\n",n,tn);
	printf("Sum upto %d terms is %d",n,sn);
}
