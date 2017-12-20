#include<stdio.h>
int main(void)
{
	int x,y,z;
	printf("Enter x and y:");
	scanf("%d %d",&x,&y);
	if(x>0)
	{
		if(y>0)
		{
			z=y;
		}
		else
		{
			z=x;
			y=x+1;
		}
		z=z+1;
	}
	else
	{
		y=x-1;
		z=2*x;
	}
	printf("\nx=%d, y=%d, z=%d",x,y,z);
}
