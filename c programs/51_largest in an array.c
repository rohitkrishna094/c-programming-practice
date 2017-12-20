//Partially done by me
#include<stdio.h>
#include<conio.h>
main()
{
     int n,a[100],large,i;
     printf("Enter the length of the array: ");
     scanf("%d",&n);
     printf("\nEnter the array numbers:\n");
     for(i=0;i<n;i++)
     {
          scanf("%d",&a[i]);
     }
     large=a[0];
     for(i=1;i<n;i++)
     {
          if(a[i]>a[0])
          {
               a[0]=a[i];
          }
          
     }
     printf("%d is the largest number.",a[0]);
     getch();
     

}
