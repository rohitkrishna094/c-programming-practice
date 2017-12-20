// Some idiotic problem with rowAverage
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int** buildTable(void);
void fillTable(int** table);
void processTable(int** table);
int rowMinimum(int* rowPtr);
int rowMaximum(int* rowPtr);
float rowAverage(int* rowPtr);
int smaller(int first, int second);
int larger(int first, int second);

int main(void)
{
	int** table;
	table = buildTable();
	fillTable(table);
	processTable(table);
	return 0;
}

float rowAverage(int* rowPtr)
{
	float total = 0;
	float rowAve;
	int column = 1;
	for(column = 1; column <= *rowPtr; column++)
	{
		total += (float)*(rowPtr + column);
	}
	rowAve = total / *rowPtr;
	return rowAve;
}

int larger(int first, int second)
{
	return (first > second ? first : second);
}

int smaller(int first, int second)
{
	return (first < second ? first : second);
}

int rowMaximum(int* rowPtr)
{
	int max = INT_MIN;
	int i;
	for(i = 0; i < rowPtr[0]; i++)
	{
		max = larger(max, rowPtr[i]);
	}
	return max;
}

int rowMinimum(int* rowPtr)
{
	int min = INT_MAX;
	int i;
	for(i = 0; i < rowPtr[0]; i++)
	{
		min = smaller(min, rowPtr[i]);
	}
	return min;
}

void processTable(int** table)
{
	int rowMin, rowMax, rowAvg, i = 0;
	while(table[i] != NULL)
	{
		rowMin = rowMinimum(table[i]);
		rowMax = rowMaximum(table[i]);
		rowAvg = rowAverage(table[i]);
		printf("\nThe statistics for row %d are: ", i+1);
		printf("\nThe minimum: %5d", rowMin);
		printf("\nThe maximum: %5d", rowMax);
		printf("\nThe average: %8.2f", rowAvg);
		i++;
	}
}

void fillTable(int** table)
{
	int i = 0;
	printf("\n================================");
	printf("\n Now we fill the table.\n");
	printf("\n For each row enter the data");
	printf("\n and press return: ");
	printf("\n================================");
	
	while(table[i] != NULL)
	{
		printf("\n row %d (%d integers) =====> ", i + 1, table[i][0]);
		int j;
		for(j = 1; j < table[i][0]; j++)
		{
			scanf("%d", &table[i][j]);
		}
		i++;
	}
}

int** buildTable(void)
{
	int** table;
	int i, rowNum, colNum;
	printf("\nEnter the number of rows in the table: ");
	scanf("%d",&rowNum);
	table = calloc((rowNum + 1),sizeof(*table));
	for(i = 0;i < rowNum; i++)
	{
		printf("Enter number of integers in row %d: ", i + 1);
		scanf("%d",&colNum);
		table[i] = calloc((colNum+1),sizeof(*table[i]));
		table[i][0] = colNum;
	}
	table[i] = NULL;
	return table;
}
