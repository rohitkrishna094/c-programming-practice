#include<stdio.h>

#define PRINT_VAL(a) printf(#a " contains %d\n",a) //string converting operator
#define FORM(t,n) t##n //merge operator

int main()
{
	int amount=-45,A,I;
	PRINT_VAL(amount);
	char FORM(Z,c1)='h';
	printf("%c",Zc1);
}
