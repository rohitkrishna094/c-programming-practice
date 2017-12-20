#include<stdio.h>
#include<conio.h>

int getNum(void);
int sqr(int x);
void printAns(int x);

int main(void)
{
	int a,b;
	a=getNum();
	b=sqr(a);
	printAns(b);
}
int getNum()
{
	int a;
	printf("Enter the number to be squared:");
	scanf("%d",&a);
	return a;
}
int sqr(int x)
{
	return x*x;
}
void printAns(int x)
{
	printf("The answer is %d",x);
}
