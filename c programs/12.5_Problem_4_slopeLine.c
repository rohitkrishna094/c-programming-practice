#include <stdio.h>

typedef struct {
		int x, y;
	} POINT;

typedef struct {
		POINT beg, end;
	} LINE;

double slope(LINE l);

int main()
{
	LINE l = (LINE) {(POINT) {3, 4}, (POINT) {2, -4}};
	printf("%f", slope(l));
	return 0;
}

double slope(LINE l)
{
	return (double)(l.beg.y - l.end.y) / (double)(l.beg.x - l.end.x);
}
