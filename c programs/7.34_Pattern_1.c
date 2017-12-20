#include<stdio.h>

void pat(int l, int b);

int main(void)
{
	int x,y;
	printf("Enter the length and breadth:");
	scanf("%d %d",&x,&y);
	pat(x,y);
}

void pat(int l, int b)
{
	int i,j;
	for(i=0;i<l;i++)
	{
		for(j=0;j<b;j++)
		{
			if(i==0 || i==(l-1))
			{
				printf("=");
			}
			else
			{
				if(j==0 || j==(b-1))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
				
			}
		}
		printf("\n");
	}
}

