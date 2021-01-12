#include <stdio.h>
int main()
{
    float A[10], B[10];
    int N;
    scanf_s("%d", &N);
    printf("A: ");
    for (int i = 0; i < N; i++) 
    {
        scanf_s("%f", &A[i]);
    }
    for (int k = 0; k < N; k++) 
    {
        B[k] = 0;
        for (int i = 0; i <= k; i++) 
        {
            B[k] += A[i];
        }
        B[k] /= k+1;
    }

    printf("B: ");
    for (int k = 0; k < N; k++)
    {
        printf("%0.2f ", B[k]);
    }
}