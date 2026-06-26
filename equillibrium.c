#include<stdio.h>
int main()
{
    int i, j, k;
    int a[7] = {3, 5, 6, 7, 7, 0, 7};
    int n = 7;
    int sumL, sumR;
    int eqi = -1;

    for(i = 1; i < n - 1; i++)
    {
        sumL = 0;
        sumR = 0;

        for(j = i - 1; j >= 0; j--)
        {
            sumL += a[j];
        }

        for(k = i + 1; k < n; k++)
        {
            sumR += a[k];
        }

        if(sumL == sumR)
        {
            eqi = i;
            printf("We found the equilibrium index %d and element = %d\n", eqi, a[eqi]);
            break;
        }
    }

    

    return 0;
}
