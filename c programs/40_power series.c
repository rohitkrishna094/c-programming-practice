#include<stdio.h>
#include<conio.h>
main()
{
     int n=1,count=1;
     float x,term=1,sum=1;
     printf("Enter the value of x: ");
     scanf("%f",&x);
     while(n<=100)
     {
          term=(x*term)/n;
          sum=sum+term;
          count++;
          if(term<0.0001)
          {
               n=999;
          }
          else
          {n++;}
     }
     printf("The value of power series is: %f",sum);
     printf("\nThe number of terms computed is: %d",count);
     getch();

}
