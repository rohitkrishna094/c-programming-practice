//Random number series between 20.000000 and 70.00000
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void)
{
	srand(time(NULL));
	float x;
	int i;
	for(i=0;i<10;i++)
	{
		x=(float)rand()/RAND_MAX;
		printf("%2.1f\n",(x*50)+20);
	}
}
