//Partially done by me
#include<stdio.h>
#include<conio.h>
main()
{
     int n[100],count,i,j,k;
     printf("Enter the number of elements in your list: ");
     scanf("%d",&count);
     printf("\nEnter a list of numbers: \n");
     for(i=0;i<count;i++)
     {
          scanf("%d",&n[i]);
     }
     for(i=0;i<count;i++)
     {
          for(j=i+1;j<count;)
          {
               if(n[j]==n[i])
               {
                    for(k=j;k<count;k++)
                    {
                         n[k]=n[k+1];
                    }
                    count--;
               }
               else
               {
                    j++;
               }
          }
     
     }
     for(i=0;i<count;i++)
     {
          printf("%d ",n[i]);
     }
     
     getch();
}
