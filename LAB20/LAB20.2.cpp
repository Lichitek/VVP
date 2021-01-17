#include <stdio.h>
int main()
{
    int a[20], b[20];
    int N, L;
    scanf_s("%d", &N);
    scanf_s("%d", &L);

    int i;
    for (i = 0; i < N; i++) 
    {
        scanf_s("%d", &a[i]);
    }

    int j = -1, len = 1, k, endn = N;

    for (i = 1; i < N; i++) 
    {
        if (a[i - 1] != a[i]) 
        {
            if (len > L) 
            {
                b[++j] = 0;
                endn -= len - 1;
            }
            else 
            {
                for (k = 0; k < len; k++)
                {
                    b[++j] = a[i - 1];
                }
            }
            len = 0;
        } 
        len++;
    }
    if (len > L) 
    {
        b[++j] = 0;
        endn -= len - 1;
    }
    else 
    {
        for (k = 0; k < len; k++)
        {
            b[++j] = a[i - 1];
        }
    }

    for (i = 0; i < endn; i++)
    {
        a[i] = b[i];
    }

    for (i = 0; i < endn; i++)
    {
        printf("%d\n", a[i]);
    }
}