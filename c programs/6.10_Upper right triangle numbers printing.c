#include<stdio.h>
#include<conio.h>
int main(void)
{
	int i,j,n;
	printf("Enter the limit level:");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
