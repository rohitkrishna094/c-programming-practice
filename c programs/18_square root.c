
//Accurate method
#include<stdio.h>
#include<conio.h>
main()
{
     float n,i,a=0.000001;
     printf("Enter a number for which you want to find square root: ");
     scanf("%f",&n);
     for(i=0;i<=n;i=i+a)
     {
          if(i*i>n)
          {
               i=i-a;
               break;
          
          }
     
     }
     printf("\nThe square root of %f is %f",n,i);
     getch();
}








