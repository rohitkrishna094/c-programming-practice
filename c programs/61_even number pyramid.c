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
               printf("%d ",2*j);//change it to 2*i to get another interesting output. :D :P
          }
          printf("\n");
     }
     getch();
}
