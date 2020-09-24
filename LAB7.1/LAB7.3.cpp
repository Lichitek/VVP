#include <stdio.h>
#include <math.h>
float main()
{
	float a, b, c, d, e;
	scanf_s("%f%f%f", &a, &b, &d);
	c=1*b/a;
	e = d * b / a;
	printf("%.0f %.0f", c, e);
}