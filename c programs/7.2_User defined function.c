#include<stdio.h>
#include<conio.h>
void greeting(void);//void function without parameters
void printOne(int x);//void function with parameters
int getQty(void);//Non-void function without parameters
int sqr(int x);//Non-void function with parameters
int main(void)
{
	greeting();//void function without parameters
	printOne(5);//void function with parameters
	getQty();//Non-void function without parameters
	printf("%d",sqr(9));//Non-void function with parameters
}
//Void function without parameters
void greeting(void)
{
	printf("Hello");
}
//Void function with parameters
void printOne(int x)
{
	printf("%d",x);
}
//Non-void function without parameters
int getQty(void)
{
	int Qty;
	printf("Enter quantity:");
	scanf("%d",&Qty);
	return Qty;
}
//Non-void function with parameters
int sqr(int x)
{
	return x*x;
}
