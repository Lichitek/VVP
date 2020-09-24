#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, del, sum, pr, ras;
	scanf_s("%f%f", &a, &b);
	sum = a * a + b * b;
	ras = a * a - b * b;
	pr = a * a * b * b;
	del = (a * a) / (b * b);
	printf("%.0f\n%.0f\n", sum, ras);
	printf("%.0f\n%.3f\n", pr, del);
	return 0;
}
