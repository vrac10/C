#include <stdio.h>

void f2(int *q){
    int temp = 1001;
    *q = temp;
    printf("The value of temp is %d\n",temp);
}

int main(){
    int x = 100;
    int *p = &x;
    f2(p);
    printf("The value of x is : %d",x);
}