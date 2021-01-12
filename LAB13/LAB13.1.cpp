#include <stdio.h>
int main()
{
	int N=10;
	float k = 0.1, s, b;
	scanf_s("%f", &s);
	while (N > 0)
	{
		b = s * k;
		k += 0.1;
		N--;
		printf("%0.2f ", b);
	}
}