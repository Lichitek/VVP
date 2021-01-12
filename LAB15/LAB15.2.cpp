#include <stdio.h>
int Sign(float X)
{
	if (X < 0)
	{
		return -1;
	}
	else if (X == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	float A, B, C;
	scanf_s("%f%f", &A, &B);
	C = Sign(A) + Sign(B);
	printf("%0.0f", C);
}