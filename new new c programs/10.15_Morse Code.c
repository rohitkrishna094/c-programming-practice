#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>

#define FLUSH while(getchar() != '\n')
#define STR_LEN 81

char menu(void);
void getInput(char* inStr);
void printOutput(char* inStr, char* outStr);
bool encode(char* (*encDec)[2], char* inStr, char* outStr);
bool decode(char* (*encDec)[2], char* inStr, char* outStr);
int convert(char* (*encDec)[2], char* s1, int col, char* s2);

int main(void)
{
	char* encDec[27][2] = 
	{
		{"A", ".-#"},
		{"B", "-...#"},
		{"C", "-.-.#"},
		{"D", "-..#"},
		{"E", ".#"},
		{"F", "..-.#"},
		{"G", "--.#"},
		{"H", "....#"},
		{"I", "..#"},
		{"J", ".---#"},
		{"K", "-.-#"},
		{"L", ".-..#"},
		{"M", "--#"},
		{"O", "---#"},
		{"P", ".--.#"},
		{"Q", "--.-#"},
		{"R", ".-.#"},
		{"S", "...#"},
		{"T", "-#"},
		{"U", "..-#"},
		{"V", "...-#"},
		{"W", ".--#"},
		{"X", "-..-#"},
		{"Y", "-.--#"},
		{"Z", "--..#"},
		{" ", "$$#"},
	}; //Encode / Decode Array
	char inStr[STR_LEN];
	char outStr[STR_LEN];
	char option;
	bool done = false;
	
	while(!done)
	{
		option = menu();
		switch(option)
		{
			case 'E' : 
					getInput(inStr);
					if(!encode(encDec, inStr, outStr))
					{
						printf("Error! Try again");
						break;
					}
					printOutput(inStr, outStr);
					break;
			case 'D' : 
					getInput(inStr);
					if(!decode(encDec, inStr, outStr))
					{
						printf("Error! Try again");
						break;
					}
					printOutput(inStr, outStr);
					break;
			default : 
					done = true;
					printf("\nEnd of Morse Code.\n");
					break;
		}
	}
	return 0;	
}

int convert(char* (*encDec)[2], char* s1, int col, char* s2)
{
	bool found = false;
	int i;
	for(i = 0; i <27 && !found; i++)
	{
		found = !strcmp(s1, encDec[i][col]);
	}
	if(found)
		strcpy(s2, encDec[i - 1][(col + 1) % 2]);
	else
		*s2 = '\0';
		return found;
}

bool decode(char* (*encDec)[2], char* inStr, char* outStr)
{
	char s1[16];
	char s2[2];
	bool error = false;
	int i;
	outStr[0] = '\0';
	while(*inStr != '\0' && !error)
	{
		for(i = 0; i <5 && *inStr != '#'; i++, inStr++)
		{
			s1[i] = *inStr;
		}
		s1[i] = *inStr;
		s1[++i] = '\0';
		error = !convert(encDec, s1, 1, s2);
		strcat(outStr, s2);
		inStr++;
	}
}

bool encode(char* (*encDec)[2], char* inStr, char* outStr)
{
	char s1[2];
	char s2[6];
	int error = 0;
	outStr[0] = '\0';
	while(*inStr != '\0' && !error)
	{
		s1[0] = toupper(*inStr);
		s1[1] = '\0';
		error = !convert (encDec, s1, 0, s2);
		strcat(outStr, s2);
		inStr++;
	}
	return !error;
}

void printOutput(char* inStr, char* outStr)
{
	printf("\nThe information entered was: \n");
	puts(inStr);
	printf("\nThe transformed information is: \n");
	puts(outStr);
	return;
}

void getInput(char* inStr)
{
	printf("\nEnter line of text to be coded: \n");
	fgets(inStr, STR_LEN, stdin);
	*(inStr - 1 + strlen(inStr)) = '\0';
	if(isalpha(*inStr) && strlen(inStr) > 16)
	{
		printf("\n***WARNING: Input length exceeded: ");
		printf("Only 16 chars will be encoded.\a\a\n");
		*(inStr + 16) = '\0';
	}
	return;
}

char menu(void)
{
	char option;
	bool validData;
	printf("M E N U \n");
	printf("--------\n");
	printf("E) encode \n");
	printf("D) decode \n");
	printf("Q) quit \n");
	do
	{
		printf("\nEnter option: press return key: ");
		option = toupper(getchar());
		FLUSH;
		if(option == 'E' || option == 'D' || option == 'Q')
			validData = true;
		else
		{
			validData = false;
			printf("\aEnter only one option\n");
			printf(" \tE, D, or Q\n");
		}
	}while(!validData);
	return option;
}
