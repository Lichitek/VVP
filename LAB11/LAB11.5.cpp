#include <stdio.h>
int main()
{
	int a;
	scanf_s("%d", &a);
	if (a > 0)
	{
		if (a % 2 == 0)
		{
			printf("positive even");
		}
		else
		{
			printf("positive odd");
		}
	}
	if (a < 0)
	{
		if (a % 2 == 0)
		{
			printf("negative even");
		}
		else
		{
			printf("negative odd");
		}
	}
	if (a == 0)
	{
		printf("zero");
	}

}