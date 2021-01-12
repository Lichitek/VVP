#include <stdio.h>
int main()
{
	int N, a=1;
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++)
	{
		printf("%d ", a);
		a += 2;
	}
}