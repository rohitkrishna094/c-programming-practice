#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	srand(time(NULL));
	int num,randomNo,prod;
	printf("Enter a number:");
	scanf("%d",&num);
	randomNo= (rand()%35)+3;
	printf("\nThe random number is: %d",randomNo);
	prod=num*randomNo;
	printf("\nThe product is: %d",prod);
	printf("\n%d ^ %d : %f",num,randomNo,pow((float)num,(float)randomNo));
	printf("\nSquare root of random number is: %f",pow((float)randomNo,0.5));
}
