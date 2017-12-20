#include<stdio.h>
int main(void)
{
	int n,ones,tens,hundreds,thousands;
	printf("Enter any number between 0 and 32,767:");
	scanf("%d",&n);
	ones=n%10;
	n=n/10;
	tens=n%10;
	n=n/10;
	hundreds=n%10;
	n=n/10;
	thousands=n%10;
	n=n/10;
	printf("%d %d %d %d %d\n",n,thousands,hundreds,tens,ones);
	printf("%d %d %d %d\n",thousands,hundreds,tens,ones);
	printf("%d %d %d\n",hundreds,tens,ones);
	printf("%d %d\n",tens,ones);
	printf("%d",ones);
}
