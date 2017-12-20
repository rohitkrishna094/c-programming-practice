#include<stdio.h>
#include<conio.h>
main()
{
     int n,i,j,k=1;
     printf("Enter number of layers to be printed: ");
     scanf("%d",&n);
     printf("\n");
     for(i=1;i<=n;i++)
     {
          for(j=1;j<=i;j++,k++)
          {
               printf("%d ",k);
          }
          printf("\n");
     }
     getch();
}
