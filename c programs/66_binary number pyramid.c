#include<stdio.h>
#include<conio.h>
main()
{
     int n,i,j,count=1;;
     printf("Enter number of steps: ");
     scanf("%d",&n);
     printf("\n");
     for(i=1;i<=n;i++)
     {
          for(j=1;j<=i;j++)
          {
               printf("%d ",count%2);
               count++;
          }
          printf("\n");
     }
     getch();
}
