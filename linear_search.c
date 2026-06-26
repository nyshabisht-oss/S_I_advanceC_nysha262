#include <stdio.h>

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int n = 5, k = 30, i, found = 0;

    for(i = 0; i < n; i++)
    {
        if(a[i] == k)
        {
            printf("Element found at index %d", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Element not found");

    return 0;
}
