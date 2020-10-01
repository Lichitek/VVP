#include <stdio.h>
int main()
{
	int a, b;
	scanf_s("%d", &a);
	if (a % 1024 != 0)
	{
		b = a / 1024 + 1;
		printf("%d", b);
	}
	else
	{
		b = a / 1024;
		printf("%d", b);
	}
}