#include<stdio.h>
#include<conio.h>
main()
{
     int l,b,i,j;
     printf("Enter the length: ");
     scanf("%d",&l);
     printf("\nEnter the breadth: ");
     scanf("%d",&b);
     printf("\n");
     for(j=1;j<=b;j++)
     {
          for(i=1;i<=l;i++)
          {
          printf("^");
          }
          
          printf("\n");
     }
     getch();
}
