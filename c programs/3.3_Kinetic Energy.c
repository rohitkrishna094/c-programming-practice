#include<stdio.h>
int main(void)
{
	float k,m,v;
	printf("Enter the mass in kilograms:");
	scanf("%f",&m);
	printf("\nEnter the velocity in metres per second:");
	scanf("%f",&v);
	k=(m*v*v)/2;
	printf("The total Kinetic Energy is:%f",k);
}
