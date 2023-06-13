#include<stdio.h>
//register storage class 
int main(){
    register int a = 100;
    int *p = &a;
    printf("%d",a);
}
