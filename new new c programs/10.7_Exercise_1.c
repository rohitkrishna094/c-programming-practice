#include<stdio.h>

int fun(int*, int, int*);
int main(void)
{
	int a = 4, b = 17, c[5] = {9, 14, 3, 15, 6};
	a = fun(&a, b, c);
	printf("2. %d %d %d %d %d %d %d\n", a, b, c[0], c[1], c[2], c[3], c[4]);
	return 0;
}

int fun(int* px, int y, int* pz)
{
	int a = 5;
	int* p;
	printf("1. %d %d %d\n", *px, y, *pz);
	for(p = pz; p < pz + 5; ++p)
	{
		*p = a + *p;
	}
	return (*px + *pz + y);
}
