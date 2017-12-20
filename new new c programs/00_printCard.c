#include<stdio.h>
#include<windows.h>
#include<conio.h>

void printCard(char name, char symbol, int x, int y);
void gotoXY(int x, int y);

int main()
{
	printCard('A','*',0,0);
	printCard('K','&',20,0);  
	printCard('Q','$',40,0);
	printCard('J','#',60,0);
	
	printCard('A','*',2,3);
	printCard('K','&',22,3);  
	printCard('Q','$',42,3);
	printCard('J','#',62,3);
	
	printCard('A','*',4,6);
	printCard('K','&',24,6);  
	printCard('Q','$',44,6);
	printCard('J','#',64,6);
	
	getch();
}
void printCard(char name, char symbol, int x, int y)
{
	gotoXY(x,y);
	printf("-------------\n");
	gotoXY(x,y+1);
	printf("| %c         |\n",name);
	gotoXY(x,y+2);
	printf("| (%c)       |\n",symbol);
	gotoXY(x,y+3);
	printf("|           |\n");
	gotoXY(x,y+4);
	printf("|           |\n");
	gotoXY(x,y+5);
	printf("|           |\n");
	gotoXY(x,y+6);
	printf("|       (%c) |\n",symbol);
	gotoXY(x,y+7);
	printf("|         %c |\n",name);
	gotoXY(x,y+8);
	printf("-------------\n");
}
void gotoXY(int x, int y)
{
 
 COORD coord;
 
 coord.X = x;
 
 coord.Y = y;
 
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
 
}
