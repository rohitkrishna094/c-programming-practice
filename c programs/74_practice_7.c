//to find the power of an integer
#include<stdio.h>
main()
{
	int base,exponent,value=1,i;
	printf("Enter the base and the exponent:");
	scanf("%d %d",&base,&exponent);
	for(i=1;i<=exponent;i++)
	{
		value=value*base;
	}
	printf("%d raised to the power of %d is equal to %d",base,exponent,value);
}
