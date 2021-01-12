#include <stdio.h>
int main()
{
	int A[10];
	int N, k, t;
	scanf_s("%d", &N);
	printf("A: ");
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &A[i]);
	}
	int j = 0;
	for (int i = 0; i < N; i++)
	{
		if (A[i]<A[j])
		{
			t = A[i];
			A[i] = A[j];
			A[j] = t;
			k = i;
			i = j;
			j = k;
		}
	}
	printf("A: ");
	for (int i = 0; i < N; i++)
	{
		printf("%d ", A[i]);
	}
}