#include <stdio.h>

typedef struct {
		int hours;
		int minutes;
		int seconds;
	} TIME;

TIME elapsedTime(TIME a, TIME b);
int difference(int a, int b);

int main()
{
	TIME a, b;
	a = (TIME){24, 24, 35};
	b = (TIME){12, 24, 50};
	TIME result = elapsedTime(a, b);
	printf("%d %d %d", result.hours, result.minutes, result.seconds);
	return 0;
}

TIME elapsedTime(TIME a, TIME b)
{
	TIME result;
	result.hours = difference(a.hours, b.hours);
	result.minutes = difference(a.minutes, b.minutes);
	result.seconds = difference(a.seconds, b.seconds);
	return result;
}

int difference(int a, int b)
{
	return (a < b) ? (b - a) : (a - b);
}
