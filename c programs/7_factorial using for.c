#include <stdio.h>
 
int main()
{
  int i, n, fact = 1;
 
  printf("Enter a number to calculate it's factorial\n");
  scanf("%d", &n);
 
  for (i = 1; i <= n; i++)
    fact = fact * i;
 
  printf("Factorial of %d = %d\n", n, fact);
 
  getch();
}
