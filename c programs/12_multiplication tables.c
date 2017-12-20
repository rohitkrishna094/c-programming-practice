#include<stdio.h>
#include<conio.h>
main()
{
     int a,i,temp;
     printf("What table do you want : ");
     scanf("%d",&a);
     printf("\nHow many iterations : ");
     scanf("%d",&i);
     for(temp=1;temp<=i;temp++)
     {
     printf("\n%dX%d=%d",a,temp,a*temp);
     
     }
     getch();
     
}
