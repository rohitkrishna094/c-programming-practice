#include<stdio.h>
#include<conio.h>
#include<windows.h>
main()
{
	char name[100];
	int i;
	printf("Enter your name:");
	scanf("%s",&name);
	printf("Hello %s, your predicted GRE score is ",name);
	for(i=0;i<10;i++)
	{
		sleep(1);
		printf(".");
	}
	printf("282");
	getch();
}
