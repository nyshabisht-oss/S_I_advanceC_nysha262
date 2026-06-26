#include<stdio.h>

int main()
{
    int a[2][2] = {
        {1, 2},
        {3, 4}
    };

    int b[2][2] = {
        {5, 6},
        {7, 8}
    };

    int p[2][2] = {0};
    int r, c, k;

    for(r = 0; r < 2; r++)
    {
        for(c = 0; c < 2; c++)
        {
            for(k = 0; k < 2; k++)
            {
                p[r][c] = p[r][c] + a[r][k] * b[k][c];
            }
        }
    }

    printf("Product of matrices is:\n");

    for(r = 0; r < 2; r++)
    {
        for(c = 0; c < 2; c++)
        {
            printf("%d ", p[r][c]);
        }
        printf("\n");
    }

    return 0;
}