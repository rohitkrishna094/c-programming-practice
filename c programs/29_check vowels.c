#include<stdio.h>
#include<conio.h>
main()
{
     char c;
     printf("Enter the alphabet: ");
     scanf("%c",&c);
     switch(c)
     {
          case 'a':
          case 'e':
          case 'i':
          case 'o':
          case 'u':
          case 'A':
          case 'E':
          case 'I':
          case 'O':
          case 'U':
          printf("This is a vowel.");
          break;
          default:printf("This is not a vowel.");
     }
     getch();
}
