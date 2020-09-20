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
	int x1, x2, y1, y2, x3, y3;
	float z1, z2, z3, S, P;
	scanf_s("%d%d", &x1, &y1);
	scanf_s("%d%d", &x2, &y2);
	scanf_s("%d%d", &x3, &y3);
	z1 = sqrt(rast(x2, x1) + rast(y2, y1));
	z2 = sqrt(rast(x2, x3) + rast(y2, y3));
	z3 = sqrt(rast(x3, x1) + rast(y3, y1));
	P = z1 + z2 + z3;
	S = sqrt(P / 2 * (P / 2 - z1) * (P / 2 - z2) * (P / 2 - z3));
	printf("%.2f\n%.2f", S, P);
}