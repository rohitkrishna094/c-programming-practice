//Not working and did not understand
//Search an ordered list using Binary Search
#include<stdio.h>

int binarySearch(int list[], int* endPtr, int target, int** locnPtr);

int main()
{
	int list[]={2,4,6,8,10,12}, target=6;
	int* endPtr=list+5;
	int** locnPtr;
	binarySearch(list, endPtr, target,locnPtr);
}

int binarySearch(int list[], int* endPtr, int target, int** locnPtr)
{
	int* firstPtr;
	int* midPtr;
	int* lastPtr;
	
	firstPtr=list;
	lastPtr=endPtr;
	while(firstPtr<=lastPtr)
	{
		midPtr=firstPtr+(lastPtr-firstPtr)/2;
		if(target>*midPtr)
		{
			firstPtr=midPtr+1;
		}//look in upper half
		else if(target< *midPtr)
		{
			lastPtr=midPtr-1;
		}//look in lower half
		else
		{
			firstPtr=lastPtr+1;//found equal: force exit
		}
		*locnPtr=midPtr;
		return(target==*midPtr);
	}
}
