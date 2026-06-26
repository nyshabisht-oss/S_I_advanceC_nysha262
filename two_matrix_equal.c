#include <stdio.h>

int main()
{
    int a[2][2]={{1,2},{3,4}};
    int b[2][2]={{1,2},{3,4}};
    int i,j,check=1;

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(a[i][j]!=b[i][j])
            {
                check=0;
                break;
            }
        }
    }

    if(check)
        printf("Matrices are Equal");
    else
        printf("Matrices are Not Equal");

    return 0;
}