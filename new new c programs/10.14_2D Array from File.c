#include<stdio.h>
#include<stdlib.h>

main()
{
	FILE* fp;
	char a[100];
	int number;
	fp = fopen("10.14_2D file.txt","r");
	if(fp==NULL)
	printf("hi");
	fscanf(fp, "%d%d %d %d %d %d",&a[0], &a[1], &a[2], &a[3], &a[4], &a[5]);
	printf("%d %d %d %d %d %d %d", a[0],a[1],a[2],a[3],a[4],a[5],a[6]);
}
