#include <stdio.h>
int main()
{
    int N, K=2;
    scanf_s("%d", &N);
    int a = 1, b = 1, c=0;
    while (N>c)
    {
        c = a + b;
        a = b; 
        b = c;
        K++;
    }
    printf("%d ", K);
}