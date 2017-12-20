//to display N terms of harmonic series and find their sum
#include<stdio.h>
main()
{
	int i,n;
	float sum=1;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("\n1");
	for(i=2;i<=n;i++)
	{
		printf("+1/%d",i);
		sum=sum+(1/(float)i);
	}
	printf("=%f",sum);
}
