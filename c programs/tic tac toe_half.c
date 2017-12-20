#include<stdio.h>
#include<conio.h>

int main()
{
    printf(" ********** Zero One Match Result ************* \n");
    int i,j;
    int a[3][3]={{0,1,0},
                 {1,1,1},
                 {0,0,1}};

                 for(i=0; i<3; i++)
                 {
                         for(j=0; j<3; j++)
                         {
                                 printf("%d ",a[i][j]);
                         }
                         printf("\n");
                 }       

                 for(i=0; i<3; i++)
                 {
                         if((a[0][0]== a[1][1] && a[1][1] == a[2][2])||(a[0][2]==a[1][1] && a[1][1]==a[2][0]))
                         {
                                printf("  winner is : %d",a[1][1]);
                                getch();
                                return 0;
                         }

            for(i=0; i<3; i++)
            {
                   if(a[i][0]==a[i][1] && a[i][0]==a[i][2])
                   {
                          printf(" winner is : %d",a[i][0]);
                          getch();
                          return 0;
                   }
                   else if(a[0][i]==a[1][i] && a[1][i]==a[2][i])
                   {
                          printf(" winner is : %d", a[0][i]);
                          getch();
                          return 0;
                   }
                   else
                   {
                   }
            }
            printf("Match draws");
}            
getch();
}
