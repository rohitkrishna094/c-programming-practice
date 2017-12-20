//c program to print a variety of numbers
#include<stdio.h>
main()
{	
	int c;
	char answer;
	start:
	printf("Enter the choice of pattern that you want:");
	scanf("%d",&c);
	if(c==1)	//part 1
	{
		int i,n,j;
		printf("Enter number of levels:");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
			{
				for(j=1;j<=i;j++)
				{
					printf("%d ",j);
				}
				printf("\n");
			}
	}
	if(c==2)	//part 2
	{
		int i,j,n,temp=1;
		printf("Enter number of levels:");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
			{
				printf("%d ",temp);
				if(temp==1)
				{
					temp=0;
				}
				else
				{
					temp=1;
				}
			}
			printf("\n");
		}
	}
	if(c==3)	//part 3
	{
		int i,j,n,k,l;
		printf("Enter number of levels:");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
			{
				printf("%d ",j);
			}
			for(k=1;k<=(n-i)*4+1;k++)
				{
					printf(" ");
				}
				for(l=i;l>=1;l--)
					{
						printf("%d ",l);
					}
					printf("\n");
		}
	}
	if(c==4)	//part 4
	{
		int i,j,n;
		printf("Enter number of levels:");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=(n-i)*2;j++)
			{
				printf(" ");
			}
			for(j=1;j<=i;j++)
			{
				printf("%d ",j);
			}
			for(j=i-1;j>=1;j--)
			{
				printf("%d ",j);
			}
			printf("\n");
		}
	}
	printf("\nDo you want to continue? y/n\n");
	scanf("%s",&answer);
	if(answer=='n' || answer=='N')
	{
		goto end;
	}
	else
	{
		goto start;
	}
	end:
	return 0;
}
