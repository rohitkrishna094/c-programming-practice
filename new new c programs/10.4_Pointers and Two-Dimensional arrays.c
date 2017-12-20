#include<stdio.h>

int main()
{
	int i,j;
	int a[][4]=
	{
		{2,4,6,8},
		{3,6,9,12},
		{5,10,15,20}
	};
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%3d",*(*(a+i)+j));
		}
		printf("\n");
	}
}
