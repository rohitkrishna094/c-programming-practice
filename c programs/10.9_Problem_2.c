#include<stdio.h>

void reverseArray(int* a, int size);

main()
{
	int i, a[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	for(i = 0; i < 10; i++)	
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	reverseArray(a, 10);
	for(i = 0; i < 10; i++)	
	{
		printf("%d ", a[i]);
	}
}

void reverseArray(int* a, int size)
{
	int b[size];
	int i, j=size - 1;
	for(i = 0; i < size; i++)
	{
		b[i] = a[j];
		j--;
	}
	for(i = 0; i < size; i++)
	{
		a[i] = b[i];
	}
	return;
}
