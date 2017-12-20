//read the month number and display its name and number of days in it
#include<stdio.h>
main()
{
	int n;
	printf("Enter the month number:");
	scanf("%d",&n);
	switch(n)
	{
		case 1: printf("The month entered is January and it has 31 days in it.");
			break;
		case 2: printf("The month entered is February and it has either 28 or 29 days in it.");
			break;
		case 3: printf("The month entered is March and it has 31 days in it.");
			break;
		case 4: printf("The month entered is April and it has 30 days in it.");
			break;
		case 5: printf("The month entered is May and it has 31 days in it.");
			break;
		case 6: printf("The month entered is June and it has 30 days in it.");
			break;
		case 7: printf("The month entered is July and it has 31 days in it.");
			break;
		case 8: printf("The month entered is August and it has 31 days in it.");
			break;
		case 9: printf("The month entered is September and it has 30 days in it.");
			break;
		case 10: printf("The month entered is October and it has 31 days in it.");
			break;
		case 11: printf("The month entered is November and it has 30 days in it.");
			break;
		case 12: printf("The month entered is December and it has 31 days in it.");
			break;
		default: printf("ERROR!!! Input is wrong.");
			break;
	}
	
}
