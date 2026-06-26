#include <stdio.h>

int main()
{
    int a[] = {10, 20, 10, 30, 20, 40};
    int n = 6, i, j, k;

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                for(k = j; k < n - 1; k++)
                    a[k] = a[k + 1];

                n--;
                j--;
            }
        }
    }

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
