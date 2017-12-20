#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int charCount(char* str, char key);
main()
{
	char name[] = " rorororor";
	printf("%d",charCount(name, 'r'));
}

int charCount(char* str, char key)
{
	int count = 0, i;
	for(i = 0; i < strlen(str); i++)
	{
		if(str[i] == key)
		{
			count++;
		}
	}
	return count;
}
