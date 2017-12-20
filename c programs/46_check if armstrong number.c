#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
     int n,t,a=0,b;
     printf("Enter a number: ");
     scanf("%d",&n);
     b=n;
     while(n!=0)
     {
          t=n%10;
          a=a+pow(t,3);
          n=n/10;
     }
     if(a==b)
     {
          printf("The number %d is an armstrong number and the sum of the cubes is %d",b,a);
     }
     else
     {
          printf("The number %d is not an armstrong number and the sum of the cubes is %d.",b,a);
     }
     getch();
     
}
