#include<stdio.h>
#include<conio.h>
int main(void)
{
	int a,b,c,avg,tavg;
	printf("Enter three test scores(between 0 and 100):");
	scanf("%d %d %d",&a,&b,&c);
	avg=(a+b+c)/3;
	tavg=(b+c)/2;
	if(avg>=90)
	{
		printf("The grade is A.");
	}
	else if((avg>=70) && (avg<90))
	{
		if(c>90)
		{
			printf("The grade is A.");	
		}
		else
		{
			printf("The grade is B.");
		}
	}
	else if((avg>=50) && (avg<70))
	{
		if(tavg>70)
		{
			printf("The grade is C.");
		}
		else
		{
			printf("The grade is D.");
		}
	}
	else if(avg<50)
	{
		printf("The grade is F.");
	}
	getch();
}
