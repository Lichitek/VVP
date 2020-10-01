#include <stdio.h>
int main()
{
	int a, b;
	scanf_s("%d", &a);
	b = a % 10 * 10 + a / 10;
	printf("%d", b);
}