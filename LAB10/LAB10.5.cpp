#include <stdio.h>
int main()
{
	int a, k, m, l, p;
	scanf_s("%d", &a);
	k = a % 1000;
	m = k / 10;
	l =a / 1000;
	p = a % 10;
	if (((m%11)==0) && (l==p))
	{
		printf("the statement is true");
	}
	else
	{
		printf("the statement is false");
	}
}