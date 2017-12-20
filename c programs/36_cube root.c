#include<stdio.h>
#include<conio.h>
main()
{
     int n;
     float a=0;
     printf("Enter a number: ");
     scanf("%d",&n);
     while(a*a*a<n)
     {
          a=a+0.00001;
     }
     printf("The cube root of %d is %f",n,a);
     getch();
}
