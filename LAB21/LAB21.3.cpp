#include <stdio.h>
int main()
{
    int a[10][10];
    int M, N;

    printf("M X N: ");
    scanf_s("%d %d", &M, &N);
    for (int i = 0; i < M; i++)
    {
        printf("%i : \n", i + 1);
        for (int j = 0; j < N; j++)
        {
            printf("%d : ", j + 1);
            scanf_s("%d", &a[i][j]);
        }
    }
    int min=1;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            min *= a[i][j];
        }
    }
    int num, mult;
    for (int i = 0; i < N; i++)
    {
        mult = 1;
        num = 0;
        for (int j = 0; j < M; j++)
        {
            mult *= a[j][i];
            num = i;
        }
        if (mult < min)
        {
            min = mult;
            num++;
        }
    }
    printf("%d\n%d", num, min);
}