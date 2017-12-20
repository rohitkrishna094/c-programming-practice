#include <stdio.h>

typedef struct {
		int x, y;
	} POINT;

typedef struct {
		POINT beg, end;
	} LINE;
	
LINE makeLine(POINT a, POINT b);

int main()
{
	POINT p, q;
	p = (POINT) {3, 4};
	q = (POINT) {0, 2};
	LINE l = makeLine(p, q);
	printf("%d %d %d %d", l.beg.x, l.beg.y, l.end.x, l.end.y);
	return 0;
}

LINE makeLine(POINT a, POINT b)
{
	return (LINE) {a, b};
}
