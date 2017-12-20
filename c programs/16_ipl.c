#include <stdio.h>
#include<conio.h>

int main()
{
    int i, n,b=1;
    char a[100][100];
    printf("Enter number of teams:");
    scanf("%d", &n);
    
    for (i = 0 ; i < n ; i++)                             /*I am entering all the team names that will participate 
                                                         in my tournament*/
    {
        printf("\nenter the name of team %d: ",i+1);
        scanf("%99s", a[i]);
    }
    printf("\nThe match schedule is:\n\n");
    
    for(i=0;i<n;i++)                                   /*I am printing all the possible matches between them*/
    {
         for(b=1;b<n-i;b++)
         {
               printf("%s vs %s\n",a[i],a[i+b]);
         }
    }
    printf("The total number of matches are %d",(n*(n-1))/2);    
    getch();
}
