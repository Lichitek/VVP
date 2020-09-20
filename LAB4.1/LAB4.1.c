#include <stdio.h>
#include <math.h>
main()
{
	int a, b, P, S;
	scanf_s("%d%d", &a, &b);
	P = 2 * (a + b);
	S = a * b;
	printf("%d\n%d\n", P, S);
	return 0;
}
