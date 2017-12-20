#include<stdio.h>
#include<conio.h>
int main(void)
{
	int rows,cols,i,j;
	printf("Enter the number of rows:");
	scanf("%d",&rows);
	printf("Enter the number of coloumns:");
	scanf("%d",&cols);
	for(i=1;i<=rows;i++)
	{
		printf("row %d: ",i);
		for(j=1;j<=cols;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}
