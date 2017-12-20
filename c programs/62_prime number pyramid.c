//incomplete
#include<stdio.h>
#include<conio.h>
main()
{
     int n,i,j,k=2,a,count=0,terms=0;
     printf("Enter number of steps: ");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
          for(j=1;j<=i;j++)
          {
               for(a=1;a<=k;a++)
               {
                    if(k%a==0)
                    {
                         count++;
                    }
               }
               if(count<=2)
               {
                    printf("%d ",k);
                    terms++;
               }
               k++;
               count=0;
               if(terms!=i)
               {
                   j=i;
                   j=j-1;
               }
          }
          printf("\n");
     }
     getch();
     
}
