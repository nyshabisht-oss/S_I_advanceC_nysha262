#include <stdio.h>

int main()
{
    int a[5] = {10,20,30,40,50};
    int *start = a;
    int *end = a + 4;
    int temp;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    for(int i = 0; i < 5; i++)
        printf("%d ", a[i]);

    return 0;
}