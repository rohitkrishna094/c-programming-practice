#include<stdio.h>
#include<conio.h>
main()
{
     int i,t=0;
     char a[100];
     printf("Enter a string: ");
     scanf("%s",a);
     for(i=0;i<=100;i++)
     {
          if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
          {
               t++;
          }
     }
     printf("The number of vowels in the printed string are: %d",t);
     getch();

}
