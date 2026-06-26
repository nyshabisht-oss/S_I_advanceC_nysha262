#include <stdio.h>

int main()
{
    int a[5] = {10,20,30,40,50};
    int *p = a;
    int k = 30, i, found = 0;

    for(i = 0; i < 5; i++)
    {
        if(*(p + i) == k)
        {
            printf("Found at index %d", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Not Found");

    return 0;
}