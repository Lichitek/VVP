#include <stdio.h>
int main()
{
	int a, b, c;
	scanf_s("%d%d", &a, &b);
	if (a % b != 0)
	{
		c = a-(a / b)*b ;
		printf("%d", c);
	}
	else
	{
		printf("%d", 0);
	}
}