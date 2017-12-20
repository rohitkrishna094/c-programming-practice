#include<stdio.h>
#include<conio.h>
main()
{
     int n,i,j;
     printf("Enter number of layers to be printed: ");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
          for(j=1;j<=i;j++)
          {
               printf("%d ",j);
          }
          printf("\n");
     }
     getch();
}
