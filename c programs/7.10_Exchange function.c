#include<stdio.h>

void exchange(int* addr_a, int* addr_b);
int main(void)
{
	int a,b;
	printf("Enter two numbers a and b:");
	scanf("%d %d",&a,&b);
	exchange(&a,&b);
	printf("a=%d b=%d",a,b);
}

void exchange(int* addr_a,int* addr_b)
{
	int hold;
	hold=*addr_b;
	*addr_b=*addr_a;
	*addr_a=hold;
	return;
}
