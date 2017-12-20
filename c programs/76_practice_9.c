//to calculate sum of 9+99+999+9999+..
#include<stdio.h>
#include<math.h>
main()
{
	int i,j,n,term=0,sum=0;
	printf("Enter number of terms:");
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		for(i=1;i<=j;i++)
		{
			term=term+9*pow(10,j-i);
		}
		sum=sum+term;
		term=0;
	}
	printf("%d",sum);
}
