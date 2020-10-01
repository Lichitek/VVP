#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main()
{
	float a;
	scanf_s("%f", &a);
	a = a/ M_PI*180;
	printf("%.2f", a);
}