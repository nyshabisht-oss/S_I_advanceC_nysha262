#include <stdio.h>

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int  i, sum = 0;
    float avg;

    for(i = 0; i < 5; i++)
        sum += a[i];

    avg = sum / 5;

    printf("Sum = %d\n", sum);
    printf("Average = %f", avg);

    return 0;
}