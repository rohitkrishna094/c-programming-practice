#include<stdio.h>
#include<conio.h>
main()
{
     int n,sum;
     printf("Sum of first n natural numbers. Enter the value of n: ");
     scanf("%d",&n);
     sum=(n*(n+1))/2;
     printf("The sum of first %d natural numbers is %d",n,sum);
     getch();
}
