//display all factors for a given number
#include<stdio.h>
main()
{
	int i=1,n;
	printf("Enter the number for which you want to find factors:");
	scanf("%d",&n);
	printf("All factors of %d are ",n);
	while(i<=n)
	{
		if(n%i==0)
		{
			printf("%d ",i);
		}
		i++;
	}
}
