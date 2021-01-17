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
    int num;
    int k;
    for (int i = 0; i < N; i++)
    {
        k = 0; 
        num = 0;
        for (int j = 0; j < M; j++)
        {
            if (a[j][i] % 2 != 0)
            {
                k++;
                num = i;
            }
        }
        if (k == M)
        {
            num++;
            break;
        }
    }
    printf("%d", num);
}