#include<stdio.h>
int main(void)
{
	int a,b,c;
	printf("Enter three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	printf("Your numbers forward:\n");
	printf("%d \n%d \n%d\n",a,b,c);
	printf("Your numbers reversed:\n");
	printf("%d \n%d \n%d",c,b,a);
}
