#include <stdio.h>
int main()
{
    int suml=0,sumr=0,i,j,k,n=6,count;
    int a[6]={1,2,1,4,2,2};
    int eqi=a[0];

    for (i=1;i<n-1;i++)
    {
        suml=0;
        sumr=0;

        for(j=i-1;j>=0;j++)
        {
            suml+=a[i];
        }
        for (int j = i + 1; j < n; j++) {
            sumr += a[j];
        }

        if (suml == sumr) {
            eqi=a[i];
            count++;
            break;
        }
    }

    printf("%d\n", count);
    return 0;
}
