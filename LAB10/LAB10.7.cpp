#include <stdio.h>
int main()
{
	int a, b, c, t1, t2, t3;
	scanf_s("%d%d%d", &a, &b, &c);
	t1 = b+c;
	t2 = a+c;
	t3 = a+b;
	if (t1>a && t2>b && t3>c)
	{
		printf("the statement is true");
	}
	else
	{
		printf("the statement is false");
	}
}