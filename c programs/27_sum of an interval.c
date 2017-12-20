#include<stdio.h>
#include<conio.h>
main()
{
     int n1,n2,i,temp=0;
     printf("This program prints sum of all the numbers between any two specified numbers\n");
     printf("\nEnter the first number of the interval: ");
     scanf("%d",&n1);
     printf("Enter the second number of the interval: ");
     scanf("%d",&n2);
     for(i=n1;i<=n2;i++)
     {
          temp=temp+i;
     
     }
     printf("The final sum is %d",temp);
     getch();
}
