#include <stdio.h>
int main()
{
    int a[20], b[20];
    int n, k;
    scanf_s("%d", &n);
    scanf_s("%d", &k);

    for (int i = 0; i < n; i++) 
    {
        scanf_s("%d", &a[i]);
    }

    int nk = 1, beginkseries = 1, lenkseries = 1, beginendseries;

    for (int i = 1; i < n; i++) 
    {
        if (a[i - 1] != a[i]) 
        {
            nk++;
            if (nk == k)
            {
                beginkseries = i;
            }
            beginendseries = i;
        }
        if (nk == k)
        {
            lenkseries++;
        }
    }

    int i2 = -1;
    for (int i = 0; i < beginkseries; i++)
    {
        b[++i2] = a[i];
    }
    for (int i = beginendseries; i < n; i++)
    {
        b[++i2] = a[i];
    }
    for (int i = beginkseries + lenkseries; i < beginendseries; i++)
    {
        b[++i2] = a[i];
    }
    for (int i = beginkseries; i < beginkseries + lenkseries; i++)
    {
        b[++i2] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = b[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}