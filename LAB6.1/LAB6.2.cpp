﻿#include <stdio.h>
int main()
{
	int a, b, c, k;
	scanf_s("%d%d%d", &a, &b, &c);
	k = c;
	c = b;
	b = a;
	a = k;
	printf("%d\n%d\n%d", a, b, c);
}