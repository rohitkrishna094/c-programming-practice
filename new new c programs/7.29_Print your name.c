#include<stdio.h>
#include<string.h>

void print(char name[]);
void firstLine(int size);
void secondLine(int size);

int main(void)
{
	char a[100];
	printf("Enter your name without spaces and press enter:");
	scanf("%s",a);
	print(a);
}

void print(char name[])
{
	int i,size;
	size=strlen(name);
	printf("\n");
	firstLine(size);
	secondLine(size);
	secondLine(size);
	secondLine(size);
	printf("*");
	for(i=1;i<=(size-1);i++)
	{
		printf(" ");
	}
	printf("%s",name);
	for(i=1;i<=(size-1);i++)
	{
		printf(" ");
	}
	printf("*\n");
	secondLine(size);
	secondLine(size);
	secondLine(size);
	firstLine(size);
}

void firstLine(int size)
{
	int i;
	for(i=1;i<=3*size;i++)
	{
		printf("*");
	}
	printf("\n");
}

void secondLine(int size)
{
	int i;
	printf("*");
	for(i=1;i<=((3*size)-2);i++)
	{
		printf(" ");
	}
	printf("*\n");
}
