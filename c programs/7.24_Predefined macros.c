#include<stdio.h>

#define rokyslash printf("I am rokyslash");//works with or without semicolon
int main(void)
{
	printf("line %d\n",__LINE__);
	printf("file %s\n",__FILE__);
	printf("date %s\n",__DATE__);
	printf("time %s\n",__TIME__);
	printf("ISO compliance %d\n",__STDC__);
	rokyslash;
}
