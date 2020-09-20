#include <stdio.h>
#include <math.h>
int rast(int a, int b)
{
	int c;
	c = abs((a - b));
	return c;
}
int main()
{
	int x1, x2, y1, y2;
	int P, S;
	scanf_s("%d%d", &x1, &y1);
	scanf_s("%d%d", &x2, &y2);
	P = 2 * (rast(x2, x1) + rast(y2, y1));
	S = rast(x2, x1) * rast(y2, y1);
	printf("%d\n%d", P, S);
}