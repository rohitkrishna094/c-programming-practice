#include<stdio.h>
#include<conio.h>
main()
{
     float r,A,C;
     printf("Enter the radius of the cirlce in cm: ");
     scanf("%f",&r);
     A=3.141592654*r*r;
     C=2*r*3.141592654;
     printf("\nArea of the circle is %.2f cm^2",A);
     printf("\n\nCircumference of the circle is %.2f cm",C);
     getch();

}
  
