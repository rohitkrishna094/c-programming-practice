#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(void)
{
	int n,i;
	float ans,t1,t0=0;
	printf("Enter the total number of terms:");
	scanf("%d",&n);
	printf("Enter all those terms:");
	for(i=1;i<=n;i++)
	{
		scanf("%f",&t1);
		t1=(1/t1)+(t0);
		t0=t1;
	}
	ans=((float)n/t1);
	printf("The harmonic mean of the numbers that you have entered is %f",ans);
}
