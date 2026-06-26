#include <stdio.h>

int main(void) {
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    
    if(year%4==0)
    {
        printf("Year is Leap Year");
    }
    else{
        printf("Common Year");
    }
    


    return 0;
}
