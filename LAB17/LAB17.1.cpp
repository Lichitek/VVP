#include <stdio.h>
int  main()
{
    int a[10];
    int N, K, L;
    float A = 0;
    scanf_s("%d%d%d", &K, &L, &N);
    for (int i = 1; i <= N; i++)
    {
        scanf_s("%d", &a[i]);
    }
    for (int i = 1; i <= N; i++)
    {
        if ((i >= K) && (i <= L))
        {
            A += a[i];
        }
    }
    A = A / (L - K + 1);
    printf("%0.1f", A);
}
