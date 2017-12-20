#include<stdio.h>
#include<conio.h>
main()
{
	int x,y;
	printf("Enter the value of x:");
	scanf("%d",&x);
	if(x>0)
	{
		printf("\ny=1");
	}
	else if(x==0)
	{
		printf("\ny=0");
	}
	else if(x<0)
	{
		printf("\ny=-1");
	}
}
