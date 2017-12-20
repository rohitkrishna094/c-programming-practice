//to reverse an integer
#include<stdio.h>
main()
{
	int n,reverse=0,rem;
	printf("Enter the number to be reversed:");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		reverse=reverse*10+rem;
		n=n/10;
	}
	printf("Reversed Number:%d",reverse);
}
