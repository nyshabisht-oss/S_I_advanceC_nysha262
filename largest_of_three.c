#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter First Number:");
    scanf("%d",&a);
    printf("Enter Second Number:");
    scanf("%d",&b);
    printf("Enter Third Number:");
    scanf("%d",&c);

    if(a>b && a>c)
    {
        printf("Number %d is largest",a);
    }
    else if(b>a && b>c)
    {
        printf("Number %d is largest",b);
    }
    else if(c>a && c>b)
    {
        printf("Number %d is largest",c);
    }


    return 0;
}
