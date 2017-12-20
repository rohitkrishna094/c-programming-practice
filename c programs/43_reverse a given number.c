//did not do on my own
#include<stdio.h>
#include<conio.h>
main()
{
     int n,t,ans=0,a;
     printf("Enter a number: ");
     scanf("%d",&n);
     a=n;
     while(n>=1)
     {
          t=n%10;
          ans=ans*10+t;
          n=n/10;    
     }
     printf("Reverse of %d is %d.",a,ans);
     getch();
}
