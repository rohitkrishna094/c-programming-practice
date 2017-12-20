#include<stdio.h>
int print_big(int var)
{
     if(var>10)
     {printf("The given number %d is greater than 10",var);}
     else
     {printf("The given number %d is smaller than 10",var);}
     
}

int main()
{
     int num;
     printf("enter a number");
     scanf("%d",&num);
     print_big(num);
     getch();
}
