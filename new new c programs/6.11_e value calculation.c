#include<stdio.h>
#include<conio.h>
int main(void)
{
	double sum=1,denom=1,prev,diff=1;
	int n=1;
	while(diff>0.0000001)
	{
		denom=denom*(double)n;
		prev=sum;
		sum=sum+(1/denom);
		diff=sum-prev;
		n++;
	}
	printf("%f",sum);
}
