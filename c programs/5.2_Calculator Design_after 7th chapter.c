#include<stdio.h>
#include<stdlib.h>
int getOption(void);
int main(void)
{
	int option;
	option=getOption();
	
	return 0;
}

int getOption(void)
{
	int option;
	printf("\t************************************\n");
	printf("\t*               MENU               *\n");
	printf("\t*                                  *\n");
	printf("\t*  1. ADD                          *\n");
	printf("\t*  2. SUBTRACT                     *\n");
	printf("\t*  3. MULTIPLY                     *\n");
	printf("\t*  4. DIVIDE                       *\n");
	printf("\t*                                  *\n");
	printf("\t************************************\n");
	printf("\n\nPlease enter your choice and press enter:");
	scanf("%d",&option);
	return option;
	
}
