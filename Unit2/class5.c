/* 
Array:
Is a data structure , which a finite collection of similar data items stored in consecutive memory locations
Only homogeneous data types can be stored in an array 
Index or subscript always starts from zero
Size of the array is fixed at compile time , it cannot change the size at run time 

SYNTAX:- dtype Array_Name[size] = {};

Address of element = address of array + (size of each element * i) [i is with respect to the array aka starting from 0]

Pointers:
*/

#include<stdio.h>

int main(){
    float area[5] = {23.4,5.6,6.8};
    // int a[15] = {[2] = 29 , [9]= 7, [14] = 48};
    // int ae[15] = {0,0,29,0,0,0,0,0,0,0,0,7,0,9,0};
    // int sum = 0;
    // int a[1];
    // for(int i = 0; i < 6; i++){
    //     int n = 0;
    //     printf("Enter the value of the array ar position %d: ",i);
    //     scanf("%d",&n);
        
    //     a[i] = n;

    // }
    // for(int j = 0; j < 6; j++){
    //     printf("%d\t",a[j]);
    //     sum+=a[j];
    // }
    // printf("%d",sum);
    int a = 10, *p;
    p = &a;
    printf("a = %d \n &a = %d \n p = %d \n &p = %d \n",a,&a,p,&p);
    printf("%lu %lu %lu %lu\n", sizeof(int *), sizeof(float *),sizeof(char *),sizeof(double *));
}

