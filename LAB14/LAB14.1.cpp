#include <stdio.h>
int main()
{
	int A, B, C, N;
	scanf_s("%d%d", &A, &B);
	while (A<=B)
	{
		C = A;
		N = C;
		while (N!=0)
		{
			N--;
			printf("%d ", C);
		}
		A++;
	}
}