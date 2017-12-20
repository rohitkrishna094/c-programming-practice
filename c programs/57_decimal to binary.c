#include<stdio.h>
#include<conio.h>
main()
{
     int n,binary=0,u,j=1;
     printf("Enter the decimal number: ");
     scanf("%d",&n);
     while(n!=0)
     {
          u=n%2;
          binary=binary+(u*j);
          j=j*10;
          n=n/2;
          
     }
     printf("%d",binary);
     getch();
     
}
