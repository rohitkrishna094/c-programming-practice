#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char roman[100];
	fgets(roman, 100, stdin);
	int i, sum = 0;
	for(i = 0; i < strlen(roman) - 1D; i++)
	{
		if(roman[i] == 'M')
		{
			sum = sum + 1000;
		}
		else if(roman[i] == 'D')
		{
			sum = sum + 500;
		}
		else if(roman[i] == 'C')
		{
			sum = sum + 100;
		}
		else if(roman[i] == 'L')
		{
			sum = sum + 50;
		}
		else if(roman[i] == 'X')
		{
			sum = sum + 10;
		}
		else if(roman[i] == 'V')
		{
			sum = sum + 5;
		}
		else if(roman[i] == 'I')
		{
			sum = sum + 1;
		}
		else
		{
			printf("Enter a valid roman numeral.");
			exit(EXIT_FAILURE);
		}
	}
	printf("%d", sum);
	return 0;
}
