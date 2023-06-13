#include<stdio.h>

union student {
    int a;
    int b;
    union date
    {
        int dd;
        int yy;
    };
    
};

int main(){
    union student s1;
    return 0;

    
}