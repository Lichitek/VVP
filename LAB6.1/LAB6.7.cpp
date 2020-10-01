#include <stdio.h>
int main()
{
	int a;
	int y = 1;
	int k = 15;
	scanf_s("%d", &a);
	while (k > 0)
	{
		y= y * a * a*a*a*a;
		k = k / 3;
	}
	printf("%d", y);
}