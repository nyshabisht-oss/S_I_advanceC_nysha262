#include <stdio.h>

int main()
{
    char str[] = "Hello 123";
    int i = 0, v = 0, c = 0, d = 0, s = 0;

    while(str[i] != '\0')
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            v++;
        else if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
            c++;
        else if(str[i]>='0'&&str[i]<='9')
            d++;
        else if(str[i]==' ')
            s++;

        i++;
    }

    printf("Vowels=%d\nConsonants=%d\nDigits=%d\nSpaces=%d",v,c,d,s);

    return 0;
}