#include<stdio.h>
#include<conio.h>
main()
{
     int year;
     printf("This program tests if the given year is a leap year or not\n");
     printf("\nEnter the year: ");
     scanf("%d",&year);
     if(year%4==0)
     {printf("The given year is a leap year.");}
     else
     {printf("The given year is not a leap year");}
     getch();

}
