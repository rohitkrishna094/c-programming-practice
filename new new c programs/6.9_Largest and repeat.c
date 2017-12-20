#include<stdio.h>
#include<conio.h>
int main(void)
{
	int i,t,n,a=0,largest=0,count=1;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Enter n positive numbers: ");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&t);
		if(t<=0)
		{
			printf("Error! Wrong inputs. Please enter only positive numbers.");
			goto end;
		}
		if(t-a>0)
		{
			largest=t;	
		}
		else
		{
			if(t-a==0)
			{
				count++;
			}
			largest=a;
		}
		a=largest;
	}
	printf("The largest number is %d and has appeared %d times.",largest,count);
	getch();
	end:;
}
