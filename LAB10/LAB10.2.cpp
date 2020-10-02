#include <stdio.h>
int main()
{
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	if ((a<b)&&(b<c))
	{
		printf("the statement is true");
	}
	else
	{
		printf("the statement is false");
	}
}