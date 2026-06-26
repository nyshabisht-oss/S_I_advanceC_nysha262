#include <stdio.h>
int main(){
    int a=70,b=65;
    int *p=&a, *q=&b;
    printf("Before swap:- a=%d & b=%d\n",*p,*q);
    int temp=*p;
        *p=*q;
        *q=temp;
    printf("After swap:- a=%d & b=%d",*p,*q);        
}