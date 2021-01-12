#include <stdio.h>
int main()
{
	int N = 0, K=0, M = 0;
	scanf_s("%d", &N);
	while (N > M)
	{
		K++;
		M += K;
	}
	printf("%d %d", K, M);
}