#include <stdio.h>
int main()
{
	int a, b, c, t1, t2, t3;
	scanf_s("%d%d%d", &a, &b, &c);
	t1 = a * a - b * b - c * c;
	t2= c * c - b * b - a * a;
	t3= b*b - a * a - c * c;
	if (t1==0||t2==0||t3==0)
	{
		printf("the statement is true");
	}
	else
	{
		printf("the statement is false");
	}
}