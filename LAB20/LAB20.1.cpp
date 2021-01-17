#include <stdio.h>
int main()
{
    int a[10], b[10], c[10];
    int N;
    scanf_s("%d", &N);
    for (int i = 0; i < N; i++) 
    {
        scanf_s("%d", &a[i]);
    }
    int k = 0;
    b[k] = 1;
    c[k] = a[k];
    for (int i = 1; i < N; i++) 
    {
        if (a[i - 1] == a[i])
        {
            ++b[k];
        }
        else 
        {
            ++k;
            b[k] = 1;
            c[k] = a[i];
        }
    }
    printf("B: ");
    for (int i = 0; i <= k; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\nC: ");
    for (int i = 0; i <= k; i++)
    {
        printf("%d ", c[i]);
    }
}