#include<stdio.h>
#include<conio.h>
main()
{
     float l,b,cost,total;
     printf("Enter the length and breadth dimensions of your floor in meters:\n");
     scanf("%f %f",&l,&b);
     printf("Enter the cost for covering a tile per metersquare in Rupees: ");
     scanf("%f",&cost);
     total=l*b*cost;
     printf("It would take Rs%.2f to cover a floor plan of dimensions %.2fX%.2f metersquare.",total,l,b);
     getch();
}
