#include <stdio.h>
int main()
{
	int N;
	float k = 1.1, s=1;
	scanf_s("%d", &N);
	while (N>0)
	{
		s = s * k;
		k += 0.1;
		N--;
	}
	printf("%f", s);
}