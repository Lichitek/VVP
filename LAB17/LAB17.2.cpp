#include <stdio.h>
int  main()
{
    int a[10];
    int N;
    scanf_s("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf_s("%d", &a[i]);
    }
    int d = a[1] - a[0];
    for (int i = 0; i < N-1; i++)
    {
        if ((a[i+1]-a[i])!=d)
        {
            d=0;
        }
    }
    printf("%d", d);
}