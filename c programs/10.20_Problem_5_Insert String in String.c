#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int insertString(char* homeString, char* insertString, int index);
main()
{
	char a[] = "Rohit Krishna";
	char b[] = "Kumaran";
	int status = insertString(a, b, 6);
	printf("%d %s",status, a);
}
int insertString(char* homeString, char* insertString, int index)
{
	if(strlen(homeString) - index < strlen(insertString)) 
	{
		return 0;
	}
	else
	{
		int i, j = 0;
		for(i = index; i < index + strlen(insertString); i++)
		{
			homeString[i] = insertString[j];
			j++;
		}
		return 1;
	}
}
