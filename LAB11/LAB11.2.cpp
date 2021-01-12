#include <stdio.h>
int main()
{
	int a, b, c, k, d;
	scanf_s("%d%d%d", &a, &b, &c);
	if ((a >= b) && (a >= c))
	{
		if (b >= c)
		{
			k = a + b;
		}
		else
		{
			k = a + c;
		}
	}
	else if ((b >= a) && (b >= c))
	{
		if (a >= c)
		{
			k = a + b;
		}
		else
		{
			k = b + c;
		}
	}
	else if ((c >= a) && (c >= b))
	{
		if (a >= b)
		{
			k = c + a;
		}
		else
		{
			k = c + b;
		}
	}
	printf("%d", k);
}