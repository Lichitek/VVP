#include <stdio.h>
int main()
{
	int a;
	scanf_s("%d", &a);
	if ((a/100==0) && (a%2==0))
	{
		printf("the statement is true");
	}
	else
	{
		printf("the statement is false");
	}
}