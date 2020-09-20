#include <stdio.h>
#include <math.h>
int rast(int a, int b)
{
	int c;
	c = (a - b) * (a - b);
	return c;
}
int main()
{
	int x1, x2, y1, y2;
	double z;
	scanf_s("%d%d", &x1, &y1);
	scanf_s("%d%d", &x2, &y2);
	z = sqrt(rast(x2, x1) + rast(y2, y1));
	printf("%.2f", z);
}