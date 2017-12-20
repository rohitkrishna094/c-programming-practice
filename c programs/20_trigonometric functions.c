#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
     int choice;
     float n,t;
     printf("If you want to enter the input in radians press 1 else if you want to enter the input in degrees press 2: ");
     scanf("%d",&choice);
     if(choice==1)
     {
          printf("Enter a number: ");
          scanf("%f",&n);
          printf("\nSin value: %f",sin(n));
          printf("\nCos value: %f",cos(n));
          printf("\nTan value: %f",tan(n));
     }
     if(choice==2)
     {
          printf("Enter a number: ");
          scanf("%f",&n);
          t=n*0.017453;
          printf("\nSin value: %f",sin(t));
          printf("\nCos value: %f",cos(t));
          printf("\nTan value: %f",tan(t));
     
     }
     getch();

}
