#include <stdio.h>

int main()
{
    int a[5]={1,2,4,5},n=5, i, sum = 0, total, missing;

    
    for (i = 0; i < sizeof(a)/sizeof(a[0]) ; i++)
    {
        sum += a[i];
    }

    total = n * (n + 1) / 2;
    missing = total - sum;

    printf("Missing number is: %d\n", missing);

    return 0;
}