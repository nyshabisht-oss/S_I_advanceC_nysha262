#include <stdio.h>

int main()
{
    int n=5;
    int a[5]={2,4,1,3,5};

    int count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                count++;
            }
        }
    }

    printf("Number of inversions = %d", count);

    return 0;
}