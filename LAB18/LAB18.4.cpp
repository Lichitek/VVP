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
	int max = A[0], x=0;
	int min = A[0], n=0;
	for (int i = 0; i < N; i++)
	{
		if (A[i]>max)
		{
			max = A[i];
			x = i;
		}
		else if (A[i]<min)
		{
			min = A[i];
			n = i;
		}
	}
	printf("A: ");
	for (int i = 0; i < N; i++)
	{
		if (((i > n) & (i < x))||((i<n)&(i>x)))
		{
			A[i] = 0;
		}
		printf("%d ", A[i]);
	}
}
