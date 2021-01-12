#include <stdio.h>
float Fact2(int N)
{
	int a=1;
	while ((N>0)&&(a>0))
	{
		a = a * N;
		N -= 2;
	}
	return a;
}
int main()
{
	int N;
	scanf_s("%d", &N);
	N = Fact2(N);
	printf("%d", N);
}