/*
GDB:
1) Segementation fault - They are caused by a program trying ot read or write an illegal memory location , a common condition 
    causes program to crash .
    An error returned by hardware with memory protection that tells the operating system as memory violated\
    Example scenarios: when scanf is unable to perform a write operation 
                       performing write operation on a read only location 
                       performing read or write operation on a free'd block of memory once it is NULL


Priority Queue:
*/


#include<stdio.h>

int main(){
    char p[] = "pes";
    p[1] = 'E';
    printf("THe new modified string is %s",p);

}