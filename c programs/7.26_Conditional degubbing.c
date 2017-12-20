#include<stdio.h>

#define PRINT_VAL(a)\
		printf("At line %d--",__LINE__);\
		printf(#a" contains %d\n",(a))
#define DEBUG 0

int main(void)
{
	int i,x=1023;
	
	#if DEBUG
		PRINT_VAL(x);
	#endif
	
	for(i=0; i<2; i++)
	{
		x=x*x;
		PRINT_VAL(i);
		PRINT_VAL(x);
	}
}
