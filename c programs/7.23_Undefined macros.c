#include<stdio.h>

#define SIZE 10
#undef SIZE
#define SIZE 20

int main(void)
{
	printf("%d",SIZE);
}
