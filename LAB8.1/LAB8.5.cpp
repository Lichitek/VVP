#include <stdio.h>
int main()
{
	int a, b;
	scanf_s("%d", &a);
	b = a % 100*10 + a / 100;
	printf("%d", b);
}