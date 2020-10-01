#include <stdio.h>
int main()
{
	int n, k;
	scanf_s("%d", &n);
	if (n % 100 == 0)
	{
		k = n / 100;
		printf("%d", k);
	}
	else
	{
		k = n / 100 + 1;
		printf("%d", k);
	}
}