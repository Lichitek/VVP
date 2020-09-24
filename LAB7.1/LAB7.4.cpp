#include <stdio.h>
int main()
{
	int a, b;
	int t = 6;
	int s = 6;
	scanf_s("%d%d", &a, &b);
	s=s+a*t+b*t;
	printf("%d", s);
}