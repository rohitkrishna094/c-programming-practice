#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{    
     while(1)
     {
     int randomNO,input,count=0;
     srand(time(NULL));
     randomNO=(rand()%100)+1;
     printf("Welcome to the guessing game\nYou have to keep guessing the number until u get it right\ngood luck.\n");
     printf("Press any key to begin\n");
     getch();
     do 
     {
          printf("Enter a number between 1 to 100 inclusive\n");
          scanf("%d",&input);
          if(input<randomNO)
          {
               printf("Your number is too low\n\n");
          }
          else if(input>randomNO)
          {
               printf("Your number is too high\n\n");
          }
          count++;
     }while(input!=randomNO);
     
     printf("Congrats!!!!!,You guessed it right in %d attempts\a\nPress any key to play again",count);
     
     getch();
     system("cls");
     }
}
