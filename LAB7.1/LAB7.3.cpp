#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c, d, e;
	scanf_s("%f%f%f", &a, &b, &d);
	c=1*b/a;
	e = d * b / a;
	printf("%.2f %.2f", c, e);
}