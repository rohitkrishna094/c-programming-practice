#include<stdio.h>

void RecGen(int length, int breadth);

int main(void)
{
	int l,b;
	printf("Enter the length and breadth of the rectangle:");
	scanf("%d %d",&l,&b);
	RecGen(l,b);
}

void RecGen(int length, int breadth)
{
	int i,j;
	printf("\n\n");
	for(i=0;i<length;i++)
	{
		for(j=0;j<breadth;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
