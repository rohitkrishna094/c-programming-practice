#include<stdio.h>
#include<conio.h>
int main(void)
{
	int n;
	printf("Enter an integer between 1 and 100:");
	scanf("%d",&n);
	printf("\n");
	if(n>100 || n<1)
	{
		n=100;
	}
	while(n!=0)
	{
		printf("%d ",n);
		n--;
	}
	getch();
}
