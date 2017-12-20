#include<stdio.h>
main()
{
	int i,n,sum=0,a;
	printf("Enter the number of numbers you want to add:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter number %d:",i);
		scanf("%d",&a);
		sum=sum+a;
	}
	printf("The sum of %d numbers that you have entered is %d.",n,sum);
}
