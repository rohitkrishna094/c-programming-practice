#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
     int n,i,t;
     char s[100],r[100];
     printf("Enter a string: \n");
     gets(s);
     n=strlen(s);
     t=n-1;
     for(i=0;i<=(n-1);i++)
     {
          r[i]=s[t];
          t=t-1;
          
     }
     printf("%s",r);
     getch();
}
