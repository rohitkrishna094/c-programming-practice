#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{    
     int age,i;
     char name[100],place[100],room[100],crush[100],part[100];
     printf("Enter your name without spaces: ");
     scanf("%s",&name);
     printf("\nEnter your age: ");
     scanf("%d",&age);
     printf("\nEnter your favourite place without spaces: ");
     scanf("%s",&place);
     printf("\nEnter your favourite room in your house without spaces: ");
     scanf("%s",&room);
     printf("\nEnter the name of your crush  without spaces: ");
     scanf("%s",&crush);
     printf("\n\aAre you sure its your crush's name? We don't want your sister's name. Type it again without spaces: ");
     scanf("%s",&crush);
     printf("\nEnter your favourite part in your body without spaces: ");
     scanf("%s",&part);
     printf("Now wait for the magic to be computed.\n");
     
     
     for(i=0;i<=5;i++)
     
     {
             printf(". ");
             sleep(1);
     }
    
     
     printf("Press a key to see it for yourself.\n");
     system("cls");
     printf("You are %s.\n\n",name);
     sleep(2);
     printf("You have %d diseases.\n\n",age);
     sleep(2);
     printf("You will die in %s.\n\n",place);
     sleep(2);
     printf("%s kissed you on your %s when you were in %s.",crush,part,room);
     getch();

}
