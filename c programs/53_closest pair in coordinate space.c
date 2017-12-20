//There is a bug in this program. If there are multiple answers, it will only show one.
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
     int n,x[100],y[100],i,j,s=0,u=0,v=1,a,b,r,t;
     printf("Enter the number of points: ");
     scanf("%d",&n);
     
     printf("Enter all the x-coordinates:\n");
     for(i=0;i<n;i++)
     {
          scanf("%d",&x[i]);
     }
     
     printf("Enter all the y-coordinates:\n");
     for(j=0;j<n;j++)
     {
          scanf("%d",&y[j]);
     }
     
     r=pow((x[1]-x[0]),2)+pow((y[1]-y[0]),2);
     
     for(a=0;a<=(n-2);a++)
     {
          for(b=(a+1);b<=(n-1);b++)
          {
               t=pow((x[b]-x[a]),2)+pow((y[b]-y[a]),2);
               s=t-s;
               if(s<0)
               {
                    u=a;
                    v=b;
                    r=t;
               }
          }
     }
     printf("The shortest distance is between points (%d,%d) and (%d,%d)",x[u],y[u],x[v],y[v]);
     printf("and the distance between them is %f",sqrt(r));
     
     getch();
}
