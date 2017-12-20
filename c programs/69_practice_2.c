//print even numbers between two numbers,order may increment or decrement
#include<stdio.h>
main()
{
	int n1,n2,i,temp;
	printf("Enter two values: ");
	scanf("%d",&n1);
	scanf("%d",&n2);
	if(n1<=n2)
	{
		if(n1%2!=0)
		{
			n1=n1+1;
		}
		while(n1<=n2)
		{
			printf("%d ",n1);
			n1=n1+2;
		}
	}
	else
	{
		if(n1%2!=0)
		{
			n1=n1-1;
		}
		while(n1>=n2)
		{
			printf("%d ",n1);
			n1=n1-2;
		}
	}
	
	
}
