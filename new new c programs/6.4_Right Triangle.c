#include<stdio.h>
#include<conio.h>
int main(void)
{
	int i,j,n;
	printf("Enter the limit value:");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}
