#include <stdio.h>
int main()
{
	int a, b, c, k;
	scanf_s("%d%d%d", &a, &b, &c);
	k = b;
	b = c;
	c = a;
	a = k;
	printf("%d\n%d\n%d", a, b, c);
}
