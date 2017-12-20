#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* removeFirstCharacter(char* str);

main()
{
	char name[] = "Rohit j";
	char* newName = removeFirstCharacter(name);
	printf("%s",newName);
}

char* removeFirstCharacter(char* str)
{
	int n = strlen(str);
	int i, index = 1;
	char* tmp = malloc((n - 1) * sizeof(*tmp));
	if(n != 0)
	{
		for(i = 0; i < n; i++)
		{
			tmp[i] = str[index];
			index++;
		}
		return tmp;
	}
	else
	return NULL;
}
