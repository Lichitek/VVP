#include <stdio.h>
int  main()
{
    int a[10];
    int N;
    scanf_s("%d%d%d", &N, &a[0], &a[1]);
    for (int i = 2; i < N; i++) 
    {
        a[i] = 0;
        int i2;
        for (int j = 0; j < i; j++)
        {
            a[i] += a[j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }  
}