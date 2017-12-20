#include<stdio.h>

#define PROD(x,y) (x)*(y)

int main(void)
{
	int a=5,b=10,c,d;
	c=PROD(a+1,b+1);
	d=PROD(25,4);
	printf("%d %d",c,d);
	
}
