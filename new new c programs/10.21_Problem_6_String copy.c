#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* newStrCpy(char* destination, char* source);

main()
{
	char a[100];
	char b[50] = "Rohit you are cool";
	newStrCpy(a,b);
	printf("%s", a);
}
char* newStrCpy(char* destination, char* source)
{
	int source_n = sizeof(source) / sizeof(char);
	int destination_n = sizeof(destination) / sizeof(char);
	if(source_n <= destination_n)
	{
		int i;
		for(i = 0; i < strlen(source); i++)
		{
			destination[i] = source[i];
		}
		destination[i] = '\0';
		return destination;
	}
	else
	return NULL;
}
