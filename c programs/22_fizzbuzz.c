#include<stdio.h>
#include<conio.h>
main()
{
     int a=1,i;
     for(a=1;a<=100;a++)
     {
          if(a%15==0)
          {printf("FizzBuzz\n");a++;}
          if(a%3==0)
          {printf("Fizz\n");a++;}
          if(a%5==0)
          {printf("Buzz\n");a++;}
          printf("%d\n",a);
     }
     getch();

}
