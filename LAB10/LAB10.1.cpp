#include <stdio.h>
int main()
{
	int a, b;
	scanf_s("%d%d", &a, &b);
	if ((a > 2) && (b <= 3))
	{
		printf("the statement is true");
	}
	else
	{
		printf("the statement is false");
	}
}