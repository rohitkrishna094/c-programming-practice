#include<stdio.h>

#define MAX_SIZE 10

int main()
{
	int ary[]={1,2,3,4,5,6,7,8,9,10};
	int* pWalk;
	int* pEnd;
	
	printf("Array forward: ");
	for(pWalk=ary, pEnd=ary+MAX_SIZE; pWalk<pEnd; pWalk++)
	{
		printf("%3d",*pWalk);
	}
	
	printf("\nArray backward:");
	for(pWalk=pEnd-1; pWalk>=ary; pWalk--)
	{
		printf("%3d",*pWalk);
	}
}
