#include <stdio.h>

int main()
{
    int a[5]={1,2,3,6,9}, b[5]={4,5,8,11,12}, c[10];
    int i,total=10;
    float median;

    

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

    //median
    if(total % 2 ==0)
    {
    median=(c[total / 2 - 1] + c[total / 2]) / 2;
    }
    else{
        median=c[total/2];
    }
    printf("%f",median);
     return 0;
}
