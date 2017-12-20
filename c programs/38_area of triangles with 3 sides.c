#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
     int a,b,c,s;
     float A;
     printf("Enter length of all 3 sides of the triangle(any units)");
     scanf("%d %d %d",&a,&b,&c);
     s=(a+b+c)/2;
     A=pow(s*(s-a)*(s-b)*(s-c),0.5);
     printf("Area of the triangle is %.2f square units",A);
     getch();
}
