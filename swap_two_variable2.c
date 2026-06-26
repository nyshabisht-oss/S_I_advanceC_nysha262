#include <stdio.h>
int main()
{
    int num1 = 4, num2 = 5;
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("After swap:  num1 = %d, num2 = %d\n", num1, num2);
    return 0;

}