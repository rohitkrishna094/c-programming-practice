#include<stdio.h>
main()
{
     int a,b,c,d;
     printf("Welcome\nThis program gives the sum of 3 numbers that you will enter :D\n");
     printf("Enter the 3 numbers\n");
     scanf("%d %d %d",&a,&b,&c);
     d=a+b+c;
     printf("The sum of the numbers you have have entered is:%d",d);
     
     getch();
}
