#include <stdio.h>
#include <math.h>
int main()
{
	int x, y;
	scanf_s("%i", &x);
	y = 4 * pow((x-3), 6) - 7 * pow((x-3), 2) +2;
	printf("%i", y);
}