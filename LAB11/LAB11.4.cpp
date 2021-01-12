#include <stdio.h>
int main()
{
	int x1, y1;
	scanf_s("%d%d", &x1, &y1);
	if (x1 * y1 > 0)
	{
		if (x1 > 0)
		{
			printf("1'st coordinate quarter");
		}
		else
		{
			printf("3'rd coordinate quarter");
		}
	}
	else
	{
		if (x1 > 0)
		{
			printf("4'th coordinate quarter");
		}
		else
		{
			printf("2'nd coordinate quarter");
		}
	}
}