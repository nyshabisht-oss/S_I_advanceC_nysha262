#include <stdio.h>

int main()
{
    int a[] = {45, 12, 78, 3, 156};
    int  i;
    int max = a[0], min = a[0];

    for(i = 0; i < 5; i++)
    {
        if(a[i] > max)
            max = a[i];

        if(a[i] < min)
            min = a[i];
    }

    printf("Largest = %d\n", max);
    printf("Smallest = %d", min);

    return 0;
}