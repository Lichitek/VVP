#include <stdio.h>
int main()
{
	int N;
	scanf_s("%d", &N);
	int s = 0;
	for (int i = 1; i <= (2 * N - 1); i += 2) 
	{
		s += i;
		printf("%d ", s);
	}
}