#include <stdio.h>
#include <math.h>
int main()
{
    float a[10][2];
    int N;
    scanf_s("%d", &N);
    for (int i = 0; i < N; i++) 
    {
        printf("\nx : ");
        scanf_s("%f", &a[i][0]);
        printf("y : ");
        scanf_s("%f", &a[i][1]);
    }

    int amax = 0;
    float r, rmax=0;
    for (int i = 0; i < N; i++) 
    {
        if ((a[i][0] < 0) && (a[i][1]>0)) 
        {
            r = sqrt(pow(a[i][0], 2) + pow(a[i][1], 2));
            if ((r > rmax) || (i == 0)) 
            {
                rmax = r;
                amax = i;
            }
        }
    }
    if ((a[amax][0] * a[amax][1]) < 0)
    {
        printf("x: %0.2f\ny: %0.2f\n", a[amax][0], a[amax][1]);
    }
    else
    {
        printf("\nx: 0\ny: 0\n");
    }
}