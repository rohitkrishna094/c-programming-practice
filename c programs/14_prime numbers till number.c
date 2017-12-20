#include<stdio.h>
#include<conio.h>
#include<time.h>
main()
{
     clock_t start,end;
     double cpu_time;
     start=clock();
     
     int n,temp,i,c,a=0,b=0;
     printf("Enter the number till where you want to print prime numbers: ");
     n=50000;
     printf("\n");
     for(temp=2;temp<=n;temp++)
     {
          for(c=1;c<=temp;c++)
          {
               i=temp%c;
               if(i==0)
               {
                    a++;
               }
          }
          if(a==2)
          {
               printf("%d ",temp);
               b++;
               
          }
          a=0;
     }
     printf("\n\nTotal number of prime numbers are: %d",b);
     end=clock();
     cpu_time=((double)(end-start))/CLOCKS_PER_SEC;
     printf("\n\nTime taken is %f seconds",cpu_time);
     
     getch();


}
