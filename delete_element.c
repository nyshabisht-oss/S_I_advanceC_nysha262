#include <stdio.h>

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int n = 5, j = 2, i;

    for(i = j; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
