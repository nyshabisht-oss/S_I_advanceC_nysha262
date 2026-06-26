#include <stdio.h>

int main()
{
    int n=121, rev = 0, rem, temp;

    temp = n;

    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (temp == rev)
        printf("%d is a Palindrome",n);
    else
        printf("%d is Not Palindrome",n);

    return 0;
}