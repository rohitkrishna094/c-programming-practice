#include<stdio.h>
#include<conio.h>
main()
{    while(1)
{
     int n,reverse=0,temp;
     printf("Enter the number:");
     scanf("%d",&n);
     temp=n;
     while(temp!=0)
     {
          reverse=reverse*10;
          reverse=reverse+temp%10;
          temp=temp/10;
     
     }
     if(n==reverse)
     {
          printf("The given number %d is a Palindrome\n",n);
     }
     else
     {
          printf("The given number %d is not a Palindrome\n",n);
     }
     getch();
}
     
}
