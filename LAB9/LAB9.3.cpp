#include <stdio.h>
int main()
{
	int n, k, m;
	scanf_s("%d%d", &n, &k);
	m = (n-(k/7)-(k%7))%7;
	if (m == 0)
	{
		m = 7;
		printf("%d", m);
	}
	else
	{
		printf("%d", m);
	}		
}