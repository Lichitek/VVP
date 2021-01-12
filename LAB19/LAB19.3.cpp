#include <stdio.h>
int main()
{
    int a[10];
    int N;
    scanf_s("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf_s("%d", &a[i]);
    }
    int ai, k;
    int max = a[0], x = 0;
    int min = a[0], n = 0;
    for (int i=0; i < N; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            n = i;
        }
    }
    N++;
    for (int i = N; i >n ; --i)
    {
        a[i] = a[i - 1];
    }
    a[n] = 0;
    for (int i=0; i < N; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            x = i;
        }
    }
    N++;
    for (int i = N; i > x; --i)
    {
        a[i] = a[i - 1];
    }
    a[x+1] = 0;
    for (int i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
}