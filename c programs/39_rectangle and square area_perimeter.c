#include<stdio.h>
#include<conio.h>
main()
{
     int choice;
     float l,b,A,P;
     printf("Enter an appropriate number and press ENTER\n");
     printf("\n1.Rectangle 2.Square ");
     scanf("%d",&choice);
     if(choice==1)
     {
          printf("\nEnter the length and breadth of the rectangle(any units): \n");
          scanf("%f %f",&l,&b);
          A=l*b;
          P=2*(l+b);
          printf("\n\nArea of the rectangle is %.2f square units",A);
          printf("\n\nPerimeter of the rectangle is %.2f units",P);
          
     }
     else if(choice==2)
     {    
          printf("\nEnter the lenght of the side of the square(any units): ");
          scanf("%f",&l);
          A=l*l;
          P=4*l;
          printf("\n\nArea of the square is %.2f square units",A);
          printf("\n\nPerimeter of the square is %.2f units",P);
              
     }
     else 
     {
          printf("\nERROR!!! Press an appropriate number.");
     }
     getch();
     
}
