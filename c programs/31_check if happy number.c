#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
     int n,t=0,r,q,x=0;;
     printf("Enter the number to be tested: ");
     scanf("%d",&n);
     q=n;
     while(x!=1)
     {
          do
          {
          
               r=q%10;
               t=t+pow(r,2);
               q=q/10;
          }
          while(q);
          if(t==1)
          {
               printf("\nThis is a happy number");
               x=1;
          }
          else
          {
               q=t;
               t=0;
          }
}
     
     
     getch();


}
