#include <stdio.h>

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num & 1)
    {
        printf("%d is an Odd number.\n", num);
    }
    else
    {
        printf("%d is an Even number.\n", num);
    }

    return 0;
}