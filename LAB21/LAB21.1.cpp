#include <stdio.h>
int main()
{
    int a[10][10];
    int M;
    printf("M: ");
    scanf_s("%d", &M);
    for (int i = 0; i < M; i++) 
    {
        printf("%i : \n", i + 1);
        for (int j = 0; j < M; j++) 
        {
            printf("%d : ", j + 1);
            scanf_s("%d", &a[i][j]);
        }
    }
    for (int i2 = 0; i2 < M / 2; i2++) 
    {
        for (int j = i2; j < M - i2; j++)
        {
            printf(" %d", a[j][i2]); 
        }
        for (int i = i2 + 1; i <= M - i2 - 1; i++)
        { 
            printf(" %d", a[M - i2 - 1][i]); 
        }
        for (int j = M - i2 - 2; j >= i2; j--)
        { 
            printf(" %d", a[j][M - i2 - 1]); 
        }
        for (int i = M - i2 - 2; i >= i2 + 1; i--) 
        {
            printf(" %d", a[i2][i]);
        }
        printf("\n");
    }
    printf(" %d\n", a[M / 2][M / 2]);
}