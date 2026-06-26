#include <stdio.h>
int main(){
    int arr[6]={12,34,54,67,69,96};
    int i;
    
    for(i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    for(i=5;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
   
   
    return 0; 
}