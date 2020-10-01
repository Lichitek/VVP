#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c, ac, bc, pr;
	scanf_s("%d%d%d", &a, &b, &c);
	if ((a < c < b) || (b < c < a))
	{
		ac = abs(int(a - c));
		bc = abs(int(b - c));
		pr = ac * bc;
		printf("%d\n%d\n%d", ac, bc, pr);
	}
	if ((c < b) && (c < a) && (b<a))
	{
		ac = abs(int(a - b));
		bc = abs(int(b - c));
		pr = ac * bc;
		printf("%d\n%d\n%d", ac, bc, pr);
	}
	if ((a < c) && (b < c) && (a<b))
	{
		ac = abs(int(a - b));
		bc = abs(int(b - c));
		pr = ac * bc;
		printf("%d\n%d\n%d", ac, bc, pr);
	}
	if ((a < c) && (b < c)&& (b<a))
	{
		ac = abs(int(a - c));
		bc = abs(int(b - a));
		pr = ac * bc;
		printf("%d\n%d\n%d", ac, bc, pr);
	}
	if ((c < b) && (c < a)&& (a<b))
	{
		ac = abs(int(a - c));
		bc = abs(int(b - c));
		pr = ac * bc;
		printf("%d\n%d\n%d", ac, bc, pr);
	}
}
