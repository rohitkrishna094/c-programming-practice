#include<stdio.h>
#include<stdbool.h>

char board[3][3], currentPlayer='O';
int i,j;

void printBoard();
void play();
bool gameOver(int i, int j);

int main()
{

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			board[i][j]='_';
		}
	}
	play();
}

void play()
{
	bool playing =true, wrong=true;
	printBoard();
	while(playing)
	{
		while(wrong)
		{
			printf("\nEnter the row and coloumn numbers:");
			scanf("%d %d",&i,&j);
			if((i<1 || i>3) || (j<1 || j>3))
			{
				printf("\nError! Please enter the values between 1 and 3 inclusive only.");
			}
			else
			{
				break;
			}
		}
		board[i-1][j-1]=currentPlayer;
		if(gameOver(i-1,j-1)==true)
		{
			printf("\a\nGame over! Player %c wins.\n\n", currentPlayer);
			playing=false;
		}
		printBoard();
		if(currentPlayer=='O')
		{
			currentPlayer='X';
		}
		else
		{
			currentPlayer='O';
		}
	}
}

bool gameOver(int i, int j)
{
	//vertical victory
	if(board[0][j]==board[1][j] && board[0][j]==board[2][j])
	{
		return true;
	}
	//horizontal victory
	if(board[i][0]==board[i][1] && board[i][0]==board[i][2])
	{
		return true;
	}
	//diagonal victory
	if(board[0][0]==board[1][1] && board[0][0]==board[2][2] && board[1][1]!='_')
	{
		return true;
	}
	if(board[0][2]==board[1][1] && board[0][2]==board[2][0] && board[1][1]!='_')
	{
		return true;
	}
	return false;	
}

void printBoard()
{
	for(i=0;i<3;i++)
	{
		printf("|");
		for(j=0;j<3;j++)
		{
			printf(" %c ",board[i][j]);
			printf("|");
		}
		printf("\n");
	}
}
