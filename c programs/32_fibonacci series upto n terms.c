#include<stdio.h>
#include<conio.h>
main()
{
     int n,i,a=0,b=1,c;
     printf("This program prints fibonacci series which has n terms\n\n");
     printf("Enter n: ");
     scanf("%d",&n);
     printf("0 1 ");
     for(i=1;i<=n-2;i++)
     {
          c=a+b;
          printf("%d ",c);
          a=b;
          b=c;
     
     }
     getch();

}
