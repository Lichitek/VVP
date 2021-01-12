#include <stdio.h>
#include <math.h>
int main()
{
	int a1, a2, b1, b2, c1, c2, s1, s2;
	float r1, r2, r3;
	scanf_s("%d%d", &a1, &a2);
	scanf_s("%d%d", &b1, &b2);
	scanf_s("%d%d", &c1, &c2);
	s1 = (a1 - b1)*(a1-b1)+(a2-b2)*(a2-b2);
	s2 = (a1 - c1) * (a1 - c1) + (a2 - c2) * (a2 - c2);
	r1 = sqrt(s1);
	r2 = sqrt(s2);
	if (r1 < r2)
	{
		printf("R=%0.2f\n", r1);
		printf("B=(%d;%d)", b1, b2);
	}
	else
	{
		printf("R=%0.2f\n", r2);
		printf("C=(%d;%d)", c1, c2);
	}
}
