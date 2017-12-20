//read a number and mention the names of all digits present. e.g., 512: five one two
#include<stdio.h>
main()
{
	int n,a[32],i=0,count=0,b[32],j=0;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{
		a[i]=n%10;
		i++;
		n=n/10;
		count++;
	}
	for(i=count-1;i>=0;i--)
	{
		b[j]=a[i];
		j++;
	}
	for(j=0;j<=count-1;j++)
	{
		if(b[j]==0)
		{
			printf("Zero ");
		}
		if(b[j]==1)
		{
			printf("One ");
		}
		if(b[j]==2)
		{
			printf("Two ");
		}
		if(b[j]==3)
		{
			printf("Three ");
		}
		if(b[j]==4)
		{
			printf("Four ");
		}
		if(b[j]==5)
		{
			printf("Five ");
		}
		if(b[j]==6)
		{
			printf("Six ");
		}
		if(b[j]==7)
		{
			printf("Seven ");
		}
		if(b[j]==8)
		{
			printf("Eight ");
		}
		if(b[j]==9)
		{
			printf("Nine ");
		}
	}
	
}
