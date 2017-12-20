#include<stdio.h>
main()
{
     int i=0;
     while(1)
     {
          printf("%d",i);
          i++;
          if(i==10000)
          {
               break;          
          }
     }
     getch();

}
