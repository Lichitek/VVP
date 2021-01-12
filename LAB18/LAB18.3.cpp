#include <stdio.h>
int main()
{
	int A[10];
	int N;
	scanf_s("%d", &N);
	printf("A: ");
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &A[i]);
	}
	int t=-1;
	for (int i = 0; i < N; i++)
	{
		if ((A[i] % 2 != 0) && (i > t))
		{
			t = i;
		}
	}
	printf("A: ");
	for (int i = 0; i < N; i++)
	{
		if ((t>=0)&&(A[i]%2!=0))
		{
			A[i] += A[t];
		}
		printf("%d ", A[i]);
	}
}
