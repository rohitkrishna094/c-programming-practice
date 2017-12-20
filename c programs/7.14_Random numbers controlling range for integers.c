//Random number series between 20 and 70
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void)
{
	srand(time(NULL));
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d\n",(rand()%51)+20);
	}
}
