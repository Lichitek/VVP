#include <stdio.h>
#include <math.h>
int main()
{
	int x, y;
	scanf_s("%i", &x);
	x = x - 3;
	y = 4 * pow((x), 6) - 7 * pow((x), 2) +2;
	printf("%i", y);
}