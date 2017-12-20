#include<stdio.h>
#include<conio.h>
int getNum();
int printNum(int x);
int main(void)
{
	int a,b;
	a=getNum();
	b=printNum(a);
}
int getNum()
{
	int n;
	printf("Enter a six digited integer:");
	scanf("%d",&n);
	return n;
}
int printNum(int x)
{
	int left, right;
	right=x%1000;
	left=x/1000;
	printf("%d,%d",left,right);
}
