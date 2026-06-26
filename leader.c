#include <stdio.h>
int main()
{
    int i, a[6]={34,3,4,11,10,1},j,leader;
    
    for(i=0;i<6;i++)
    {
        leader=1;
        for(j=i+1;j<6;j++)
        {
            if (a[j]>=a[i])
            {
                leader = 0;
                break;
            }
        }
    
    if(leader==1)
    {
        printf("leader are %d\n",a[i]);
    }
}

    return 0;
}