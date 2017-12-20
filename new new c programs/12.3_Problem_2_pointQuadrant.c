#include <stdio.h>

typedef struct {
		int x, y;
	} POINT;

int whichQuad(POINT a)
{
	return (a.x > 0) ? ((a.y > 0) ? 1 : 4) : ((a.y > 0) ? 2 : 3);
}

int main()
{
	POINT p = (POINT) {-3, -4};
	printf("%d", whichQuad(p));
	return 0;
}


