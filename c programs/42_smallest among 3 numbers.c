#include<stdio.h>
#include<conio.h>
main()
{
     int a,b,c;
     printf("Enter any 3 numbers: \n");
     scanf("%d %d %d",&a,&b,&c);
     if(a<b)
     {
          if(a<c)
          {
              printf("%d is the smallest among them.",a); 
          }
          else
          {
               printf("%d is the smallest among them.",c);
          }
     }
     else
     {
          if(b<c)
          {
               printf("%d is the smallest among them.",b);
          }
          else
          {
               printf("%d is the smallest among them.",c);
          }
     }
     getch();
     
}
