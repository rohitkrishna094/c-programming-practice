#include<stdio.h>
#include<conio.h>
#include<time.h>
#define NNN 100000
main()
{
     clock_t start,end;
     double cpu_time_used;
     start=clock();
     
     int n,a[NNN],i,j,b;
     printf("Enter the limit(n>1): ");
     n=50000;//max 50,003
     printf("\n");
     for(i=2;i<=n;i++)
     {
          a[i]=i;
     }
     
     for(j=2;j<n;j++)
     {
          for(i=j;i<=n;)
          {
               i=i+j;
               a[i]=0;
               
          }
     }
     
     
     for(i=2;i<=n;i++)
     {
          if(a[i]==0)
          {
               continue;//it will with or without continue:tested :P
          }
          else
          {
               printf("%d ",a[i]);
               b++;
          }
     }
     printf("\n\nTotal number of prime numbers are: %d",b);
     end=clock();
     cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
     printf("\n\nTime taken is %f seconds.",cpu_time_used);
     
     
     
     getch();
     
     
}
