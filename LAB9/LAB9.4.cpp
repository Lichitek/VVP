#include <stdio.h>
int main()
{
	int a, b, c, k, n;
	scanf_s("%d%d%d", &a, &b, &c);
	k = (a/c)*(b/c);
	n = a*b - k * c*c;
	printf("%d %d", k, n);
}