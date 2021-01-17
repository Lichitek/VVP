#include <stdio.h>
#include <math.h>
int main()
{
    float arr[10][2];
    int N;
    scanf_s("%d", &N);
    for (int i = 0; i < N; i++)
    {
        printf("\nx : ");
        scanf_s("%f", &arr[i][0]);
        printf("y : ");
        scanf_s("%f", &arr[i][1]);
    }

    int p1=0, p2=0, p3=0;
    float p, pmax = 0, A, B, C;

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                p = 0;
                A = sqrt(pow(arr[i][0] - arr[j][0], 2) + pow(arr[i][1] - arr[j][1], 2));
                B = sqrt(pow(arr[i][0] - arr[k][0], 2) + pow(arr[i][1] - arr[k][1], 2));
                C = sqrt(pow(arr[j][0] - arr[k][0], 2) + pow(arr[j][1] - arr[k][1], 2));
                p = A + B + C;
                if (p > pmax)
                {
                    p1 = i;
                    p2 = j;
                    p3 = k;
                    pmax = p;
                }
            }
        }
    }
    if (((A + B) > C) && ((A + C) > B) && ((B + C) > A))
    {
        printf("P: %f\n", pmax);
        printf("arr[%d]:\n x: %0.2f\n y: %0.2f\n", p1, arr[p1][0], arr[p1][1]);
        printf("arr[%d]:\n x: %0.2f\n y: %0.2f\n", p2, arr[p2][0], arr[p2][1]);
        printf("arr[%d]:\n x: %0.2f\n y: %0.2f\n", p3, arr[p3][0], arr[p3][1]);
    }
    else
    {
        printf("triangle doesn't exist");
    }
}