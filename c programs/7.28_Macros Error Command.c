#include<stdio.h>

#define TRUE 1
#define FALSE 1//remove this and you will get an error in compiler
#if defined(TRUE) && !defined(FALSE)
	#error You need to define FALSE too.
#elif defined(FALSE) && !defined(TRUE)
	#error You need to define TRUE too.
#endif

int main()
{
	printf("Just a test.\n");
	return 0;
}
