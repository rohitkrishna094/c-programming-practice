#include<stdio.h>
#define SIZE 5

void multiply(int* pAry, int size);

int main()
{
	int ary[SIZE];
	int* pWalk;
	int* pLast;
	pLast= ary+SIZE-1;
	for(pWalk=ary;pWalk<=pLast;pWalk++)
	{
		printf("Please enter an integer: ");
		scanf("%d",pWalk);
	}
	multiply(ary,SIZE);
	printf("Doubled value is: \n");
	for(pWalk=ary;pWalk<=pLast;pWalk++)
	{
		printf(" %3d",*pWalk);
	}
}

void multiply(int* pAry, int size)
{
	int* pWalk;
	int* pLast;
	pLast=pAry+size-1;
	for(pWalk=pAry;pWalk<=pLast;pWalk++)
	{
		*pWalk= *pWalk *2;
	}
}
