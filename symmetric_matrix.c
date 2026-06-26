#include <stdio.h>

int main()
{
    int a[3][3]={{1,2,3},{2,4,5},{3,5,6}};
    int i,j,check=1;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                check=0;
                break;
            }
        }
    }

    if(check)
        printf("Symmetric Matrix");
    else
        printf("Not Symmetric Matrix");

    return 0;
}