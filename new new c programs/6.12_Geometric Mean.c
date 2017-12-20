#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(void)
{
	int n,t1,t0=1,i;
	float ans;
	printf("Enter the total number of terms:");
	scanf("%d",&n);
	printf("Enter all those terms:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&t1);
		t1=t1*t0;
		t0=t1;
	}
	ans=pow((float)t1,(1/(float)n));
	printf("The geometric mean of the numbers that you have entered is %.2f",ans);
}
