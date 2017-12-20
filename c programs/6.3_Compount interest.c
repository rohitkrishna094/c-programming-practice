#include<stdio.h>
#include<conio.h>
int main(void)
{
	float p,r,interest;
	int i,t;
	printf("Enter the principal amount:");
	scanf("%f",&p);
	printf("\nEnter the rate of interest:");
	scanf("%f",&r);
	printf("\nEnter the time period:");
	scanf("%d",&t);
	printf("\nYear\tValue");
	printf("\n====\t=====\n");
	for(i=1;i<=t;i++)
	{
		printf("%2d",i);
		interest=((p*r)/100);
		p=p+interest;
		printf("%13.2f\n",p);	
	}
}
