//find first n even numbers and their sum
#include<stdio.h>
main()
{
	int i=0,n,count=0,sum=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	while(count!=n)
	{
		printf("%d",i);
		if(count!=(n-1))
		{
			printf("+");
		}
		count++;
		sum=sum+i;
		i=i+2;
	}
	printf("\nSum of first %d odd numbers is %d",n,sum);
}
