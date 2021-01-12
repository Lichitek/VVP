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
    for (int i = 1; i < N; i += 2)
    {
        printf("%d ", a[i]);
    }
    for (int i = N-(N%2)-2; i >= 0; i -= 2)
    {
        printf("%d ", a[i]);
    }
}