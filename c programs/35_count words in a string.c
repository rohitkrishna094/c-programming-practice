#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
     int t,i,b=1;
     char a[100];
     printf("Enter a sentence: ");
     gets(a);
     t=strlen(a);
     for(i=0;i<=t;i++)
     {
          if(a[i]==' ')
          {
               b++;
          }
     }
     printf("The number of words in the above sentence are %d",b);
     getch();
}
