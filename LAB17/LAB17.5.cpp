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
    for (int i = 0; i < N - 1; i++) 
    {
        for (int j = i + 1; j < N; j++) {
            if (a[i] == a[j]) 
            {
                printf("%d %d", i, j);
            }
        }
    }
}