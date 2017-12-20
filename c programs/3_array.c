#include<stdio.h>
main()
{
     int a[10],i=0;
     a[0]=0;
     while(i<=10)
     {a[i+1]=a[i]+2;
     i++;
     }
     printf("%d",a[10]);
     getch();
}
