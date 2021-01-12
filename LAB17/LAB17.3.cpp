#include <stdio.h>
int  main()
{
    int A[10];
    int N, d;
    scanf_s("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf_s("%d", &A[i]);
    }
    d = A[1];
    for (int i = 1; i < N; i+=2)
    {
        if (d > A[i])
        {
            d = A[i];
        }
    }
    printf("%d", d);
}