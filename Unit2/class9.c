#include<stdio.h>
int main(){

    char a[] = {'p','e','s'};
    printf("%lu and a[] = %s\n",sizeof(a),a);
    a[0] = 'P';
    // a++; // array is a constant pointer , it always refers to same storage 
    printf("Updated a = %s\n",a);
}