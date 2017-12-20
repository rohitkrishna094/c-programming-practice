#include<stdio.h>
#include<conio.h>
main()
{
     int n,i,a,temp=0;;
     printf("Enter the number of numbers you want to add: ");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {    printf("Enter number %d: ",i);
          scanf("%d",&a);
          temp=temp+a;
     }
     printf("The total sum is %d",temp);
     getch();

}
