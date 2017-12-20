#include<stdio.h>
#include<conio.h>
main()
{
     int n,a=0,b=1,c=0,i;
     printf("This program prints fibonacci series upto a number that you specify.\n");
     printf("Enter that number: ");
     scanf("%d",&n);
     printf("\n0 1 ");
     while(c<n)
     {
          c=a+b;
          if(c>n)
          {
               break;
          }
          printf("%d ",c);
          a=b;
          b=c;
     }
     getch();

}
