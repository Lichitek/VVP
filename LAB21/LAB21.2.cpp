#include <stdio.h>
int main()
{
    int a[10][10];
    int M, N, K;
    printf("M X N: ");
    scanf_s("%d %d", &M, &N);
    scanf_s("%d", &K);
    for (int i = 0; i < M; i++)
    {
        printf("%i : \n", i + 1);
        for (int j = 0; j < N; j++)
        {
            printf("%d : ", j + 1);
            scanf_s("%d", &a[i][j]);
        }
    }
    int sum = 0, mult = 1;
    for (int i = 0; i < N; i++)
    {
        sum += a[K-1][i];
        mult *= a[K-1][i];
    }
    printf(" %d\n%d", sum, mult);
}