#include<stdio.h>
#include<math.h>
main()
{
     float a,b,c,disc,i,r1,r2;
     printf("This programs finds roots for an equation of this form aX^2+bX^2+c=0\n");
     printf("\nEnter the value of a: ");
     scanf("%f",&a);
     printf("\nEnter the value of b: ");
     scanf("%f",&b);
     printf("\nEnter the value of c: ");
     scanf("%f",&c);  
     disc=(pow(b,2))-(4*a*c);
     if(disc<0)
     {printf("\a\nerror:504:The roots are imaginary and hence cannot be computed in this program");}
     if(disc==0)
     {
          printf("\nThe roots are real and equal\n");
          for(i=1;i<=3;i++)
          {    sleep(1);
               printf(". ");
               
          }
          sleep(1);
          r1=(-b+sqrt(disc))/(2*a);
          r2=r1;
          printf("\nThe roots are %.2f and %.2f",r1,r2);
     }
     if(disc>0)
     {
          printf("\nThe roots are real and distinct\n");
          for(i=1;i<=3;i++)
          {    sleep(1);
               printf(". ");
               
          }
          sleep(1);
          r1=(-b+sqrt(disc))/(2*a);
          r2=(-b-sqrt(disc))/(2*a);
          printf("\nThe roots are %.2f and %.2f",r1,r2);
     }
     getch();
}
