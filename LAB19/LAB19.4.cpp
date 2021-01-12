#include <stdio.h>
int main()
{
    int a[20];
    int N;
    scanf_s("%d", &N);
    for (int i = 0; i < N; i++) 
    {
        scanf_s("%d", &a[i]);
    }
    for (int i = N - 1; i >= 0; i--) 
    {
        if (a[i] < 0) 
        {
            N++;
            for (int j = N; j > i; j--)
            {
                a[j] = a[j - 1];
            }
            a[i + 1] = 0;
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
}