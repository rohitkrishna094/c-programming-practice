#include<stdio.h>

void day_of_week(int a);

int main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("\n");
	day_of_week(a);
}

void day_of_week(int a)
{
	switch(a)
	{
		case 0: printf("The day is Sunday.");
				break;
		case 1: printf("The day is Monday.");
				break;
		case 2: printf("The day is Tuesday.");
				break;
		case 3: printf("The day is Wednesday.");
				break;
		case 4: printf("The day is Thursday.");
				break;
		case 5: printf("The day is Friday.");
				break;
		case 6: printf("The day is Saturday.");
				break;
		default: printf("Error!!! Please enter a number between 0 and 6 inclusive.");
		break;
	}
}
