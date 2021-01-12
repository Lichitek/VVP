#include <stdio.h>
int Quarter(float x, float y)
{
	if ((x * y) > 0)
	{
		if (x > 0)
		{
			return printf("1'st coordinate quarter");
		}
		else
		{
			return printf("3'rd coordinate quarter");
		}
	}
	else
	{
		if (x > 0)
		{
			return printf("4'th coordinate quarter");
		}
		else
		{
			return printf("2'nd coordinate quarter");
		}
	}
}
int main()
{
	for (int i = 0; i < 3; i++)
	{
		float x, y;
		scanf_s("%f%f", &x, &y);
		Quarter(x, y);
	}
}