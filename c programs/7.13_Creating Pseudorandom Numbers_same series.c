#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	srand(12);//seed temporally
	printf("%d\n",rand());
	printf("%d\n",rand());
	printf("%d\n",RAND_MAX);
}
