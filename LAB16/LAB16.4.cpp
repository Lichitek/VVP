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
    for (int i = 0; i < N / 2; i++) 
    {
        printf("%d %d ", a[i], a[N - i - 1]);
    }
    if (N % 2 != 0)
    {
        printf("%d", a[(N / 2)]);
    }
}