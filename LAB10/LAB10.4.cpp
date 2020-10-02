#include <stdio.h>
int main()
{
	int a;
	scanf_s("%d", &a);
	if (((a&10<(a%100)/10 && (a%100)/10<a/100)) || ((a / 100 < (a % 100) / 10 && (a%100)/10< a % 10)))
	{
		printf("the statement is true");
	}
	else
	{
		printf("the statement is false");
	}
}