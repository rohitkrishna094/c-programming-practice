#include<stdio.h>
#include<stdlib.h>

void getOption(int* addr_option);
void getData(int* addr_a, int* addr_b);
float ADD(int a, int b);
float SUB(int a, int b);
float MUL(int a, int b);
float DIV(float a, float b);

int main(void)
{
	int option,a,b;
	float result;
	printf("Calculator by Rokyslash!!!\n");
	printf("===========================\n");
	printf("********************\n");
	printf("*\tMENU       *\n");
	printf("*\t           *\n");
	printf("* 1.ADD            *\n");
	printf("* 2.SUBTRACT       *\n");
	printf("* 3.MULTIPLY       *\n");
	printf("* 4.DIVIDE         *\n");
	printf("*\t           *\n");
	printf("********************\n");
	getOption(&option);
	if(option<1 || option>4)
	{
		printf("\nError! Program will exit for you have entered a wrong choice.\n");
		printf("Please try again! :D");
		getch();
		exit(0);
	}
	getData(&a,&b);
	switch(option)
	{
		case 1: result=ADD(a,b);
				break;
		case 2: result=SUB(a,b);
				break;
		case 3: result=MUL(a,b);
				break;
		case 4: result=DIV(a,b);
				break;
		default: 
				break;
	}
	if(option==1)
	{
		printf("Sum is %1.0f.",result);
	}
	if(option==2)
	{
		printf("Difference is %1.0f.",result);
	}
	if(option==3)
	{
		printf("Product is %1.0f.",result);
	}
	if(option==4)
	{
		if(b==0)
		{
			printf("Math Error! Division by zero.");
		}
		else
		printf("Quotient is %f.",result);
	}
	getch();
}
void getOption(int* addr_option)
{
	printf("Please type your choice and press enter:");
	scanf("%d",addr_option);
	return;
}
void getData(int* addr_a, int* addr_b)
{
	printf("Enter the two integers and press enter:");
	scanf("%d %d",addr_a,addr_b);
	return;
}
float ADD(int a, int b)
{
	return (a+b);
}
float SUB(int a, int b)
{
	return (a-b);
}
float MUL(int a, int b)
{
	return (a*b);
}
float DIV(float a, float b)
{
	return (a/b);
}
