#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main(void)
{
	char testChar;
	printf("Enter the test character:");
	scanf("%c",&testChar);
	if(islower(testChar))
	{
		printf("\nYou have entered a lowercase letter.");
	}
	else if(isupper(testChar))
	{
		printf("\nYou have entered an uppercase letter.");
	}
	else if(isdigit(testChar))
	{
		printf("\nYou have entered a digit.");
	}
	else if(ispunct(testChar))
	{
		printf("\nYou have entered a punctuation character.");
	}
	else if(isspace(testChar))
	{
		printf("\nYou have entered a space.");
	}
	else 
	{
		printf("\nYou have entered a control character.");
	}
	getch();
}
