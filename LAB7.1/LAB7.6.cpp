#include <stdio.h>
int main()
{
	float x, y, a1, b1, a2, b2, c1, c2, d, d1, d2;
	scanf_s("%f%f%f", &a1, &b1, &c1);
	scanf_s("%f%f%f", &a2, &b2, &c2);
	d = a1 * b2 - a2 * b1;
	d1 = c1 * b2 - c2 * b1;
	d2 = a1 * c2 - a2 * c1;
	if ((d == 0) && (d1 == 0) && (d2 == 0))
	{
		printf("infinite number of solutions concept");
	}
	if (d == 0)
	{
		printf("no solutions");
	}
	else
	{
		x = d1 / d;
		y = d2 / d;
		printf("%.1f %.1f", x, y);
	}
}