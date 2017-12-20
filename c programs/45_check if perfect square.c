#include<stdio.h>
#include<conio.h>
main()
{
     int n,i=1,t;
     printf("Enter the number: ");
     scanf("%d",&n);
     
     while(i<=n)
     {
          if(i*i==n)
          {
               printf("%d is a perfect square.",n);
               
               i=n+1;
          }
          if(i==n)
          {
             printf("%d is not a perfect square.",n);  
          }
     i++;
     }
     getch();
     
     
}
