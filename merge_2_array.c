#include <stdio.h>

int main()
{
    int a[5]={1,2,3,6,9}, b[5]={4,5,8,11,12}, c[10];
    int i;

    

    for (i = 0; i < 5; i++)
    {
        c[i] = a[i];
    }

   
    for (i = 0; i < 5; i++)
    {
        c[5 + i] = b[i];
    }


    printf("Merged array:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");


    return 0;
}
