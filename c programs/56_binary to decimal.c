#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
     innt n,decimal=0,remainder,u,j=1;
     printf("Enter a binary number: ");
     scanf("%d",&n);
     while(n!=0)
     {
          u=n%10;
          remainder=u*j;
          decimal=decimal+remainder;
          n=n/10;
          j=j*2;
     }
     printf("%d",decimal);
     getch();
     
     
}
