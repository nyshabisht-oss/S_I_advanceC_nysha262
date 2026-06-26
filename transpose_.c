#include <stdio.h>

int main()
{
    int a[5][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12},
        {13, 14, 15}
    };

    int t[3][5];
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            t[j][i] = a[i][j];
        }
    }

    printf("Original Matrix:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
