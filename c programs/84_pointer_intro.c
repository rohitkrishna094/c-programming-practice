#include<stdio.h>
main()
{
	int a=51;
	int *p;
	p=&a;//referencing or pointing to the memory location of variable a
	printf("The value of X: %d\n",a);//printing the value of variable a
	printf("The address of X:%p\n",p);//printing the address where the value of variable a is stored
	printf("The address of X:%p\n",&a);//same as above
	printf("%d\n",*p);//de-referencing:printing the value stored in address p
	printf("%d\n",*(&a));//same as above: de-referencing a referenced value will give us the value of variable a
	*p=20; //*p=20=>*(&a)=20=>a=20; all these 3 are same
	printf("%d\n",*p);
	printf("%d\n",a);
}
