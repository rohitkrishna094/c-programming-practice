#include<stdio.h>
void getData(int* divisor, int* dividend);
void Divide(int divisor, int dividend, int* addr_quot, int* addr_rem);
void printAns(int quot, int rem);
int main(void)
{
	int divisor,dividend,quot,rem;
	getData(&divisor, &dividend);
	Divide(divisor, dividend, &quot, &rem);
	printAns(quot,rem);
}
void getData(int* divisor, int* dividend)
{
	printf("Enter two integers:");
	scanf("%d %d",dividend,divisor);
}
void Divide(int divisor, int dividend, int* addr_quot, int* addr_rem)
{
	*addr_quot=dividend/divisor;
	*addr_rem=dividend%divisor;
}
void printAns(int quot, int rem)
{
	printf("The quotient is %d\n",quot);
	printf("The remainder is %d",rem);
	
}
