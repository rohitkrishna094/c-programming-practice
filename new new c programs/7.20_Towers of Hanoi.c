#include<stdio.h>

void towers(int n, char source, char dest, char auxiliary);

int main(void)
{
	towers(3,'A','C','B');
}

void towers(int n, char source, char dest, char auxiliary)
{
	static int step=0;
	printf("Towers(%d, %c, %c, %c)\n",n,source, dest, auxiliary);
	if(n==1)
	{
		printf("\t\t\t\tStep %3d: Move from %c to %c\n",++step, source, dest);
	}
	else
	{
		towers(n-1, source, auxiliary, dest);
		printf("\t\t\t\tStep %3d: Move from %c to %c\n",++step, source, dest);
		towers(n-1, auxiliary, dest, source);
	}
	return;
}
