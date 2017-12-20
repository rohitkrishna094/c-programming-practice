#include<stdio.h>
#include<stdlib.h>

int** TwoD(int *a, int rows, int cols, int n);
main()
{
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int** answer = TwoD(a, 2, 5, 10);
	int i, j;
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("%d ", answer[i][j]);
		}
		printf("\n");
	}
}

int** TwoD(int *a, int rows, int cols, int n)
{
	if(rows * cols != n)
	return NULL;
	else
	{
		int** table = calloc(rows, sizeof(*table));
		int i, j, index = 0;
		for(i = 0; i < rows; i++)
		{
			table[i] = calloc(cols, sizeof(*table[i]));
		}
		for(i = 0; i < rows; i++)
		{
			for(j = 0; j < cols; j++)
			{
				table[i][j] = a[index];
				index++;
			}
		}
		return table;
	}
}
