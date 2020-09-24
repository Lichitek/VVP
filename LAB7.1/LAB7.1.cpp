#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
float main()
{
	float a;
	scanf_s("%f", &a);
	a = a / 180 * M_PI;
	printf("%.2f", a);
}