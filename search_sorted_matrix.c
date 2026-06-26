#include <stdio.h>

int main()
{
    int n = 4, m = 3;
    int i = 0;
    int j = m - 1;
    int found = 0;
    int a[4][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9},
                   {10, 11, 12}};
    int target;
    printf("Enter element to search: ");
    scanf("%d", &target);

    

    for (i = 0, j = m - 1; i < n && j >= 0; )
    for(i=0;i<n;i++)
    {
      for(j=m-1;j>=0;j--)
    
    {
        if (a[i][j] == target)
        {
            printf("Element found at (%d, %d)\n", i, j);
            break;
        }
        else if (a[i][j] > target)
        {
            j--;
        }
        
    }

}

    return 0;
}