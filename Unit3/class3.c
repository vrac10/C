/*
Memory Allocation:
1) Static Memory Allocation
2) Automatic Memory allocation
3) Dynamic Memory Allocation
    a) Malloc - 
        Syntax: void *malloc(size_t N);
    b) Calloc -
        Syntax: void *calloc(size_t nmemb, size_t size); It initialises to 0 by default
    c) Realloc - 
        Syntax: void *realloc(void *ptr,size_t size);
    d) free-
        Syntax: free(ptr);
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *x;
    x = (int *)calloc(10,sizeof(int));

    if (x != NULL){

    for(int i = 0; i < 10; i++){
        printf("%d\t",x[i]);
    }

    }

    int *y;
    y = (int *)realloc(3,sizeof(int));
    if(y != NULL){
    for(int j = 0; j < 10; j++){
        printf("%d\t",y[j]);
    }

    }
}