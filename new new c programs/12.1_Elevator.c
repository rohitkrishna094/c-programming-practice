#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

#define TOP_FLOOR 10
#define DELAY_FACTOR 1000

// Global Type Declarations
typedef enum {OUT, IN} BUTTON_STATUS;
typedef enum {DOWN, STOP, UP} DIRECTION_STATUS;
typedef struct
	{
		int currentFloor;
		BUTTON_STATUS* buttons;
	} ELEVATOR;
	
// Function Declarations
void initialize(ELEVATOR* elev);
void runELEVATOR(ELEVATOR* elev);
void terminate(ELEVATOR* elev);
void move(ELEVATOR* elev);
bool anyUpRequest(ELEVATOR* elev);
bool anyDownRequest(ELEVATOR* elev);
void moveUp(ELEVATOR* elev);
void moveDown(ELEVATOR* elev);
void timePass(int m);

int main()
{
	// Local Declarations
	ELEVATOR elevator;
	
	// Statements
	initialize(&elevator);
	runELEVATOR(&elevator);
	terminate(&elevator);
	return 0;
}

void initialize(ELEVATOR* elev)
{
	elev->buttons = calloc(TOP_FLOOR + 1, sizeof(BUTTON_STATUS));
	
	int i;
	for(i = 0; i <= TOP_FLOOR; i++)
		elev->buttons[i] = OUT;
	elev->currentFloor = 1;
	return;
}

void runELEVATOR(ELEVATOR* elev)
{
	char buffer[81];
	int floor;
	char* pStrIn;
	
	printf("\n\nThis elevator goes from basement (0) to floor %d", TOP_FLOOR);
	printf("\n\nType floors & press return to start\nIf no new floors, press return key.\nTo quit, key EOF\n\nPlease enter floors:");
	
	while(fgets(buffer, 81, stdin))
	{
		pStrIn = buffer;
		while(*pStrIn != '\n')
		{
			while(*pStrIn == ' ')
				pStrIn++;
			if(!isdigit(*pStrIn))
			{
				printf("\aInvalid floor %c\n", *pStrIn);
				pStrIn++;
			} // end if
			else
			{
				sscanf(pStrIn, "%d", &floor);
				if(floor == elev->currentFloor)
					printf("\n\aAlready on floor %d.", elev->currentFloor);
				else
					if(floor < 0 || floor > TOP_FLOOR)
						printf("\n\a%d invalid floor", floor);
					else
						elev->buttons[floor] = IN;
				while(isdigit(*pStrIn))
					pStrIn++;
			} // end else
		} // end while
		move(elev);
		printf("\n\nPlease enter floors: ");
	} // end while
	return;
}

void move(ELEVATOR* elev)
{
	static DIRECTION_STATUS direction = STOP;
	
	bool anyUp;
	bool anyDown;
	
	anyUp = anyUpRequest(elev);
	anyDown = anyDownRequest(elev);
	
	if(direction == UP)
	{
		if(!anyUp && anyDown)
			direction = DOWN;
		else
			if(!anyUp && !anyDown)
				direction = STOP;
	} // end UP
	else if(direction == DOWN)
	{
		if(!anyDown && anyUp)
			direction = UP;
		else
			if(!anyDown && !anyUp)
				direction = STOP;
	} // end DOWN
	
	else if(direction == STOP)
	{
		if(anyUp)
			direction = UP;
		else 
			if(anyDown)
				direction = DOWN;
	} // else if stop
	
	if(direction == UP)
		moveUp(elev);
	else
		if(direction == DOWN)
			moveDown(elev);
		else
			printf("\n***** NO BUTTON PRESSED ***** ");
	return;
}

void moveUp(ELEVATOR* elev)
{
	printf("\nThe door is being closed...");
	printf("\nWe are going up.");
	(elev->currentFloor)++;
	while(elev->buttons[elev->currentFloor] != IN)
	{
		printf("\n");
		timePass(2);
		printf("\nPassing floor %d", elev->currentFloor);
		printf("\n");
		timePass(2);
		(elev->currentFloor)++;
	} // end while
	
	elev->buttons[elev->currentFloor] = OUT;
	printf("\nThe door us being opened...");
	printf("\n");
	printf("\n ***** FLOOR %d ***** ", elev->currentFloor);
	printf("\n");
	timePass(4);
	return;
}

void moveDown(ELEVATOR* elev)
{
	printf("\nThe door is being closed...");
	printf("\nWe are going down.");
	(elev->currentFloor)--;
	while(elev->buttons[elev->currentFloor] != IN)
	{
		printf("\n");
		timePass(2);
		printf("\nPassing floor %d", elev->currentFloor);
		printf("\n");
		timePass(2);
		(elev->currentFloor)--;
	} // end while
	
	elev->buttons[elev->currentFloor] = OUT;
	printf("\nThe door us being opened...");
	printf("\n");
	printf("\n ***** FLOOR %d ***** ", elev->currentFloor);
	printf("\n");
	timePass(4);
	return;
} 

bool anyUpRequest(ELEVATOR* elev)
{
	bool isAny = false;
	
	int check;
	for(check = elev->currentFloor; check <= TOP_FLOOR && !isAny; check++)
		isAny = (elev->buttons[check] == IN);
	return isAny;
}

bool anyDownRequest(ELEVATOR* elev)
{
	bool isAny = false;
	
	int check;
	for(check = elev->currentFloor; check >= 0; check--)
		isAny = isAny || (elev->buttons[check] == IN);
	return isAny;
}

void timePass(int time)
{
	long i;
	for(i = 0; i < (time * DELAY_FACTOR); i++);
	return;
}

void terminate(ELEVATOR* elev)
{
	free(elev->buttons);
	return;
}
