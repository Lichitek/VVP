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
    int k = 0;
    for (int i = 1; i < N; i++) 
    {
        if (a[k] != a[i]) 
        {
            k++;
            a[k] = a[i];
        }
    }
    k++;
    for (int i = 0; i < k; i++)
    {
        printf("%d ", a[i]);
    }
}