#include <stdio.h>
#include <math.h>
float RingS(float R1, float R2)
{
	float S, pi=3.14;
	S = pi * (R1 * R1 - R2 * R2);
	return S;
}
int main()
{
    for (int i = 0; i < 3; i++) 
    {
        float R1, R2, S;
        scanf_s("%f%f", &R1, &R2);
        S=RingS(R1, R2);
        printf("%0.2f\n", S);
    }
}