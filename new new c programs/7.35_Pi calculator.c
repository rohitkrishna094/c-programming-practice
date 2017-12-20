//pi=sqrt(6*(sigma(1/(n*n))))
#include<stdio.h>
#include<math.h>


void piCalc(int n);

int main()
{
	int n;
	printf("Enter the limit:");
	scanf("%d",&n);
	piCalc(n);
}

void piCalc(int n)
{
	int i;
	float sigma=0, pi;
	for(i=1;i<=n;i++)
	{
		sigma=sigma+(1/((float)i*(float)i));
	}
	pi=pow(6*sigma,0.5);
	printf("The value of pi is %f.",pi);
}


