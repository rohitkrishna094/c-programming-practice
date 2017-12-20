#include<stdio.h>
#include<conio.h>
main()
{
     int a,b,c;
     printf("Enter any 3 numbers: \n");
     scanf("%d %d %d",&a,&b,&c);
     if(a>b)
     {
          if(a>c)
          {
              printf("%d is the greatest among them.",a); 
          }
          else
          {
               printf("%d is the greatest among them.",c);
          }
     }
     else
     {
          if(b>c)
          {
               printf("%d is the greatest among them.",b);
          }
          else
          {
               printf("%d is the greatest among them.",c);
          }
     }
     getch();
     
}
