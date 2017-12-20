#include<stdio.h>
main()
{
     int i=0;
     while(i<100)
     {
         
          i++;
          if(i%2==1)
          {
               continue;          
          }
           printf("%d",i);
     }
     getch();

}
