#include <stdio.h>


int main(){


    // *p = &arr or *p = arr both are smae

    // array notattion 
    // int arr[] = {11,22,33,44,55};
    // int *p = arr;
    // for(int i = 0; i < 5; i++){
    //     printf("%d\t",p[i]);
    // }

    //pointer notation 
    // for(int i = 0; i <5; i++){
    //     printf("%d\t",*(p+i));
    // }
    int arr[] = {11,22,33,44,55};
    int i;
    int *p = arr;
    //using *p++
    // for(i = 0; i<5;i++) printf("%d\t",*p++);

    // using *++p undefined behaviour when out of bounds
    // for(i = 0; i<5; i++) printf("%d\t",*++p);

    // using (*p)++
    // for(i = 0; i<5; i++) printf("%d\n",(*p)++); 
    for(i =0; i<5; i++,p++) printf("%d\t",*p);
}