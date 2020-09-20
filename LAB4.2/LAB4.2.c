#include <stdio.h>
#include <math.h>
float Pi = 3.14;
float main()
{
	float L; int d;
	scanf_s("%d", &d);
	L = Pi * d;
	printf("%.2f", L);
}
