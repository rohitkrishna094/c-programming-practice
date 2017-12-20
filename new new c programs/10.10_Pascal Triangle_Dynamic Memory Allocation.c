//Only works for small numbers upto maybe 14
#include<stdio.h>
#include<stdlib.h>

void printTable(int n);
int combination(int n, int r);
long int factorial(int a);
main()
{
	int n;
	printf("Enter the size of pascal triangle you want to print: ");
	scanf("%d",&n);
	printTable(n);
}

int combination(int n, int r)
{
	return factorial(n) / (factorial(r) * factorial(n-r));
}

long int factorial(int a)
{
	if(a == 0)
	return 1;
	else
	return a * factorial(a - 1);
}
void printTable(int n)
{
	int i, j = 0;
	int** table;
	table = calloc(n, sizeof(*table));
	//creating table
	for(i = 0; i < n; i++)
	{
		table[i] = calloc(i+1 , sizeof(*table[i]));
		j++;
	}
	//filling table
	table[0][0] = 1;
	for(i = 1; i < n; i++)
	{
		for(j = 0; j < i + 1; j++)
		{
			table[i][j] = factorial(i) / (factorial(j) * factorial(i - j));
		}
	}
	//printing
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < i + 1; j++)
		{
			printf("%d ", table[i][j]);
		}
		printf("\n");
	}
}
