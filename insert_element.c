#include <stdio.h>

int main()
{
    int a[10] = {10, 20, 30, 40, 50};
    int n=5, j = 2, value = 25, i;

    for(i = n; i > j; i--)
        a[i] = a[i - 1];

    a[j] = value;
    n++;

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
