#include <stdio.h>

int main()
{
    float v[12], m[4][3];
    int c, l, d = 0, n;

    for(c = 0; c < 4; c++)
    {
        for(l = 0; l < 3; l++)
        {
            scanf("%f", &m[c][l]);
            n = c + l + d;
            printf("%d\n", n);
            v[n] = m[c][l];
        }
        d = d + 2;
    }
    for(c = 0; c < 12; c++)
    {
        printf("vetor[%d] = %.1f\n", c, v[c]);
    }

    return 0;
}