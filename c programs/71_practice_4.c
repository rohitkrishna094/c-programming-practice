//to find the number of and sum of all integers between an interval that are divisible by a number
#include<stdio.h>
main()
{
	int n,n1,n2,i,count=0,sum=0,temp;
	printf("Enter the interval by typing two numbers:");
	scanf("%d %d",&n1,&n2);
	printf("Enter the number whose divisibility test is to be performed:");
	scanf("%d",&n);
	if(n1>n2)
	{
		temp=n1;
		n1=n2;
		n2=temp;
	}
	for(i=n1;i<=n2;i++)
	{
		if(i%n==0)
		{
			count=count+1;
			sum=sum+i;
		}
	}
	printf("\nThe total number of integers between %d and %d that are divisible by %d are:%d",n1,n2,n,count);
	printf("\nThe sum of all the integers between %d and %d that are divisible by %d is:%d",n1,n2,n,sum);
}
