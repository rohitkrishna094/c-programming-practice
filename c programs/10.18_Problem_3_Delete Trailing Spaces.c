//Bug whenever the newName has 0 characters which apart from spaces, the strlen of newname shows 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* deleteTrailingSpaces(char* str);
main()
{
	char name[] = "";
	printf("%d",strlen(name));
	char* newName = deleteTrailingSpaces(name);
	printf("%s %d",newName, strlen(newName));
}

char* deleteTrailingSpaces(char* str)
{
	int n = strlen(str);
	if(n != 0)
	{
		int final = 0, i;
		for(i = n - 1; i >= 0; i--)
		{
			if(str[i] != ' ')
			{
				final = i;
				break; 
			}
		}
		char* tmp = malloc((final + 2) * sizeof(*tmp));
		for(i = 0; i <= final; i++)
		{
			tmp[i] = str[i];
		}
		tmp[i] = '\0';
		return tmp;
	}
	else if(n == 0)
	return NULL;
}
