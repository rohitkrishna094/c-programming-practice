//incomplete
#include<stdio.h>
#include<time.h>
main()
{
     char user[10],temp[10];
     int t;
     printf("Welcome to the game of guessing\nThere are 2 choices namely a,and b\n");
     getch();
     printf("You just have to guess and see if u are lucky\n");
     getch();
     printf("Type a letter from a and b choices\n");
     scanf("%s",&user[0]);
     srand(time(NULL));
     t=rand();
     if(t%2==0)
     {
         temp[0]="a";
     }else
     {
       temp[0]="b";
     }
     if(strncmp(temp,user,1)==0)
     {
          printf("You have guessed right. The answer is %s",user[0]);
     }else
     {
          printf("You have guessed wrong. The answer is %s, try again",temp[0]);
     }
     getch();
     
}
