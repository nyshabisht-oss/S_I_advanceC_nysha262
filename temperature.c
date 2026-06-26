#include <stdio.h>
int main(){
    int c,f;
    printf("Enter a temperature in celsius:");
    scanf("%d",&c);
    f= c*(9/5)+32;
    printf("Temperature in Fahrenheit is = %d F",f);

}