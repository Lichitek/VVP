#include <stdio.h>
int main()
{
	int N;
	float A, S=1, K=1;
	scanf_s("%d%f", &N, &A);
	while (N>0)
	{
		K = K * A;
		S = S + K;
		N--;
	}
	printf("%0.3f", S);
}