#include <stdio.h>
int main()
{
	float S1 = 1000, S2 = 1100;
	int K = 0;
	float P;
	scanf_s("%f", &P);
	while (S2>S1)
	{
		S1 = (S1 * P) / 100 + S1;
		K++;
	}
	printf("%0.2f %d", S1, K);
}