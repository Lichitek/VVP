#include <stdio.h>
#include <math.h>
int main()
{
	int x, y;
	scanf_s("%d", &x);
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	printf("%d", y);
}