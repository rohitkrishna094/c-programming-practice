#include<stdio.h>

int compareFunction(int* a, int* b);

main()
{
	int a[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int b[10]={1, 2, 3, 4, 5, 6, 7, 89, 9, 10};
	compareFunction(a, b);
}

int compareFunction(int* a, int* b)
{
	int i, result = 1;
	for(i = 0; i < 10; i++)
	{
		if(a[i] != b[i])
		result = 0;
	}
	printf("This is the result : %d", result);
	return result;
}
