#include <stdio.h>
int main()
{
	float a, b, sr;
	scanf_s("%f%f", &a, &b);
	sr = (a + b) / 2;
	printf("%.1f", sr);
}
