#include <stdio.h>
int main()
{
	float x, a, b;
	scanf_s("%d%d", &a, &b);
	x = (-1) * b / a;
	printf("%.1f", x);
}