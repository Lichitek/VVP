#include <stdio.h>
int main()
{
	int A[10], B[10];
	int N;
	scanf_s("%d", &N);
	printf("A: ");
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &A[i]);
	}
	printf("\nB: ");
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &B[i]);
	}
	int t;
	for (int i = 0; i < N; i++)
	{
		t = A[i];
		A[i] = B[i];
		B[i] = t;
	}
	printf("A: ");
	for (int i = 0; i < N; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\nB: ");
	for (int i = 0; i < N; i++)
	{
		printf("%d ", B[i]);
	}
}
