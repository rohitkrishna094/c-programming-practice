#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* removeLastCharacter(char* str);
main()
{
	char name[] = "Rohit Krishna";
	char* newName = removeLastCharacter(name);
	printf("%s",newName);
}
char* removeLastCharacter(char* str)
{
	int n = strlen(str);
	if(n != 0){
		char* tmp = malloc(n*sizeof(*tmp));
		int i;
		for(i = 0; i < strlen(str) - 1; i++)
		{
			tmp[i] = str[i];
		}
		tmp[i] = '\0';
		return tmp;
	}
	else
	return NULL;
}
