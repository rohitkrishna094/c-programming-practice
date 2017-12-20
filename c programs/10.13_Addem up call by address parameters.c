#include<stdio.h>

void addem(int* a, int* b);
main()
{
	int a = 17, b = 25;
	addem(&a, &b);
	printf("%d %d",a , b);
}

void addem(int* a, int* b)
{
	*a = *a + 2;
	*b = *b + 5;
}
