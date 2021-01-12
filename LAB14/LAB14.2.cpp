#include <stdio.h>
int main()
{
	int A, B, N=0, C;
	scanf_s("%d%d", &A, &B);
	C = A;
	while (C >= B)
	{
		N++;
		C -= B;
	}
	A = A - N * B;
	printf("%d", A);
}