#include<stdio.h>

main()
{
	char a[6]={'z', 'x', 'm', 's', 'e', 'h'};
	int i;
	for(i = 0; i < 6; i++)
	{
		printf("%c ", *(a + i));
	}
}
