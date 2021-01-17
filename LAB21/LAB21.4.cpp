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
    float sred; 
    int k;
    for (int i = 0; i < N; i++)
    {
        sred = 0;
        for (int j = 0; j < M; j++)
        {
            sred += a[j][i];
        }
        sred = sred / M;
        k = 0;
        for (int j = 0; j < M; j++)
        {
            if (a[j][i] > sred)
            {
                k++;
            }
        }
        printf("%d ", k);
    }
}