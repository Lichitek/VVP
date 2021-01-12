#include <stdio.h>
int  main()
{
	int N, A, D;
	scanf_s("%d%d%d", &N, &A, &D);
	for (int i = 0; i < N; i++)
	{
		printf("%d ", A);
		A = A * D;
	}
}