#include <stdio.h>
#include <math.h>
float PowerA3(float A, float *B)
{
	*B = powf(A, 3);
	return *B;
}
int main()
{
	for (int i = 0; i < 5; i++) 
	{
		float A, B;
		scanf_s("%f", &A);
		B = PowerA3(A, &B);
		printf("%0.0f ", B);
	}
}