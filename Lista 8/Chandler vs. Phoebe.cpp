#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int m[n][n], l, c;

    for(l = 0; l < n; l++)
    {
        for(c = 0; c < n; c++)
        {
            scanf("%d", &m[l][c]);

            if(m[l][c] < 0)
            {
                m[l][c] = m[l][c] * 2;
            }
        }
    }

    for(c = 0; c < n; c++)
    {
        for(l = 0; l < n; l++)
        {
            printf("%d", m[l][c]);

            if(l < n-1)
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}