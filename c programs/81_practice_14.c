//find the number of digits in a number
#include<stdio.h>
main()
{
	int n,digit=1,temp;
	printf("Enter a number:");
	scanf("%d",&n);
	temp=n;
	while(n/10!=0)
	{
		n=n/10;
		digit++;	
	}
	printf("The total number of digits in %d are %d",temp,digit);
}
