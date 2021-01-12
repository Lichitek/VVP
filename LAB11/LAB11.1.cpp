#include <stdio.h>
int main()
{
	int a, b;
	scanf_s("%d%d", &a, &b);
	if (a != b)
	{
		if (a > b)
		{
			b = a;
			printf("%d %d", a, b);
		}
		else
		{
			a = b;
			printf("%d %d", a, b);
		}
	}
	else
	{
		a = 0;
		b = 0;
		printf("%d %d", a, b);
	}
}