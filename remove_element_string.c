#include <stdio.h>

int main()
{
    char str[] = "Hello@123";
    int i = 0;

    while(str[i] != '\0')
    {
        if((str[i]>='A'&&str[i]<='Z') || (str[i]>='a'&&str[i]<='z'))
            printf("%c", str[i]);

        i++;
    }

    return 0;
}