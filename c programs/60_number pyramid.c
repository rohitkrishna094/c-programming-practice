#include<stdio.h>
#include<conio.h>
main()
{
     int n,i,j;
     printf("Enter number of steps: ");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
          for(j=1;j<=i;j++)
          {
               printf("%d ",i);
          }
          printf("\n");
     }
     getch();
}
