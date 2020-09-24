#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c, ac, bc, sum;
	scanf_s("%d%d%d", &a, &b, &c);
	ac = abs(int(a - c));
	bc = abs(int(b - c));
	sum = ac + bc;
	printf("%d\n%d\n%d", ac, bc, sum);
	return 0;
}