#include <stdio.h>
int main()
{
	int a;
	int y = 1;
	int k = 8;
	scanf_s("%d", &a);
	while (k > 0)
	{
		y = y*a*a;
		k=k/2;
	}
	printf("%d", y);
}