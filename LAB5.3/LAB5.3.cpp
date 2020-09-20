#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c, ac, bc, pr;
	scanf_s("%d%d%d", &a, &b, &c);
	ac = abs(int(a - c));
	bc = abs(int(b - c));
	pr = ac * bc;
	printf("%d\n%d\n%d", ac, bc, pr);
	return 0;
}