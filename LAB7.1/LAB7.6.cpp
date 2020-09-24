#include <stdio.h>
int main()
{
	float x, y, a1, b1, a2, b2, c1, c2;
	scanf_s("%f%f%f", &a1, &b1, &c1);
	scanf_s("%f%f%f", &a2, &b2, &c2);
	y = (c1 * a2 - c2 * a1) / (a2 * b1 - a1 * b2);
	x = (c1 - b1 * y) / a1;
	printf("%.1f %.1f", x, y);
}