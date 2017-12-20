#include<stdio.h>
#include<conio.h>
main()
{
     while(1)
     {
     int n,i,temp,a=0;
     printf("Enter the number: ");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
          temp=n%i;
          if(temp==0)
          {
           a++;
          }
          
     }
     if(a==2)
     {
          printf("The given number %d is a prime number\n",n);
     }
     else
     {
          printf("The given number %d is not a prime number\n",n);
     }
     getch();
     }
}
