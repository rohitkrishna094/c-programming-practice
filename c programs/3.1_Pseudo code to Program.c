#include<stdio.h>
int main(void)
{
	float x,y,p,s,total;
	printf("Enter x:");
	scanf("%f",&x);
	printf("\nEnter y:");
	scanf("%f",&y);
	p=x*y;
	s=x+y;
	total=(s*s)+(p*(s-x)*(p+y));
	printf("\nThe total is:%f",total);
}
