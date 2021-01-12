#include <stdio.h>
int  main()
{
    int a[10];
    int N, d=-1;
    scanf_s("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf_s("%d", &a[i]);
    }
    
    for (int i = 1; i < N; i++)
    {
        if ((a[i] > a[i - 1]) && (a[i] > a[i + 1]))
        {
            d = i;
        }
    }
    if (d == -1)
    {
        d = 0;
    }
    printf("%d", d);
}