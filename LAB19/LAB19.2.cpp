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
    int ai, k, num;
    for (int i = 0; i < N; i++) 
    {
        num = 0;
        for (int j = 0; j < N; j++)
        {
            if (a[i] == a[j])
            {
                ++num;
            }
        }
        if (num == 2) 
        {
            k = i - 1;
            ai = a[i];
            for (int j = i; j < N; j++)
                if (a[j] != ai) 
                {
                    k++;
                    a[k] = a[j];
                }
            N = k + 1;
            i--;
        }
    }
    printf("%d\n", N);
    for (int i = 0; i < N; ++i)
    {
        printf("%d ", a[i]);
    }
}