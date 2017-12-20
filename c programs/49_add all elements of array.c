#include<stdio.h>
#include<conio.h>
main()
{
     int n,a[100],b[5],i;
     b[1]=0;
     printf("Enter the length of the array: ");
     scanf("%d",&n);
     printf("Enter the numbers in the array: \n");
     for(i=0;i<n;i++)
     {
          scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
          b[1]=b[1]+a[i];
     }
     printf("Sum of all numbers in the array is %d",b[1]);
     getch();
}
