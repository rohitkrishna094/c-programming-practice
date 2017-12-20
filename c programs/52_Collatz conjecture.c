#include<stdio.h>
#include<conio.h>
main()
{
     int n,i=0;
     printf("Enter a number: ");
     scanf("%d",&n);
     while(n!=1)
     {
          if(n%2==0)
          {
               n=n/2;
               i=i+1;
          }
          else
          {
              n=(3*n)+1; 
              i++;
          }
     }
     printf("The number of steps to reach 1 is %d",i);
     getch();
}
