#include<stdio.h>

#define salescomm (12.5/100) 
#define fed (25.0/100) 
#define state (10.0/100) 
#define retire (8.0/100) 

void printPayroll(char name[], float sales, float bonus);

int main()
{
	float sales, bonus;
	char name[100];
	printf("Enter the name without spaces:");
	scanf("%s",name);
	printf("Enter the sales:");
	scanf("%f",&sales);
	printf("Enter the bonus:");
	scanf("%f",&bonus);
	printPayroll(name, sales, bonus);
}

void printPayroll(char name[], float sales, float bonus)
{
	float total;
	total=(salescomm*sales)+bonus-(fed*sales)-(state*sales)-(retire*sales);
	printf("\nPayroll");
	printf("\n=======\n");
	printf("Name               : %s",name);
	printf("\n-------------------------------------\n");
	printf("\nSales              :     %2.2f",sales);
	printf("\nSales Commission   :     %2.2f",salescomm*sales);
	printf("\nBonus              : (+) %2.2f",bonus);
	printf("\nFederal withholding: (-) %2.2f",fed*sales);
	printf("\nState withholding  : (-) %2.2f",state*sales);
	printf("\nRetirement plan    : (-) %2.2f",retire*sales);
	printf("\n=====================================");
	printf("\nTotal              :     %2.2f",total);
}
