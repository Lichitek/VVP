#include <stdio.h>
int main()
{
	int N;
	float A, S = 1, C = -1, K=1;
	scanf_s("%d%f", &N, &A);
	while (N > 0)
	{
		K = C * A * K;
		S = S + K;
		N--;
	}
	printf("%0.3f", S);
}