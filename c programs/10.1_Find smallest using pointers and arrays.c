#include<stdio.h>

int main()
{
	int ary[5],i;
	printf("Fill 5 values in the array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",ary+i);//&ary[i] is same as ary+i
	}
	int* pSm;
	int* pWalk;
	int* pLast;
	
	pLast=(ary+4);
	
	for(pSm=ary,pWalk=(ary+1);pWalk<=pLast;pWalk++)
	{
		if(*pWalk <= *pSm)
		{
			pSm=pWalk;
		}
	}
	
	printf("The smallest integer is %d.",*pSm);
}
