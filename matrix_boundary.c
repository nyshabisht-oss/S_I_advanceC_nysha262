#include<stdio.h>
int main()
{
    int i, j ;
    int a[4][4]={1,2,3,4,4,5,5,6,6,7,8,9,1,0,1,8};
    for(i=0; i<4 ;i++)
    {
        for(j=0; j<4 ;j++)
        {
            if(i==0||j==0||i==4||j==4)
            {
                printf("%d \n", a[i][j]);
            }
        }
    }
    return 0;
}