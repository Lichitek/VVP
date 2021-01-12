#include <stdio.h>
int main()
{
    int A, B;
    scanf_s("%d%d", &A, &B);
    while ((A != 0) && (B != 0)) 
    {
        if (A > B)
        {
            A = A % B;
        }
        else
        {
            B = B % A;
        }
    }
    printf("%d", A + B);
}