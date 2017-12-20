#include<stdio.h>
#include<conio.h>
main()
{
     int a[10][100][100],i,j,k,m,n,number,z;
     printf("Enter the number of matrices to be added: ");
     scanf("%d",&number);
     printf("\nEnter the order: ");
     scanf("%d %d",&m,&n);
     for(k=0;k<number;k++)
     {
          printf("\nEnter matrix %d: ",k+1);
          for(i=0;i<m;i++)
          {
               for(j=0;j<n;j++)
               {
                    scanf("%d",&a[k][i][j]);
               }
               j=0;
          }
          i=0;
     }
     printf("\n");
     
     for(k=0;k<number;k++)
     {
          for(i=0;i<m;i++)
          {
               for(j=0;j<n;j++)
               {
                    printf("%d ",a[k][i][j]);
               }
               printf("\n");
               
          }
          if(k!=number-1)
          {
               printf(" +");
          }
          printf("\n");
          
          
     }
     printf(" =\n");
     k=0;
    
    for(z=1;z<number;z++)
    {
          for(i=0;i<m;i++)
          {
               for(j=0;j<n;j++)
               {
                    a[k][i][j]=a[k][i][j]+a[k+z][i][j];
               }
          }
     }
     
     
     k=0;
     {
          for(i=0;i<m;i++)
          {
               for(j=0;j<n;j++)
               {
                    printf("%d ",a[k][i][j]);
               }
               printf("\n");
          }
     }
          
     getch();
}
