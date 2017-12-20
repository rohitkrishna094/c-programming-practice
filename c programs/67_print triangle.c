//incomplete
#include<stdio.h>
#include<conio.h>
main()
{
     int n,i,j,count=0;
     printf("Enter number of steps: ");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
          for(j=1;j<=n;j++)
          {
               if(count==n)
               {
                    printf("*");
                    
               }
               printf(" ");
               count++;
               
          }
          printf("\n");
     }
     getch();
}
