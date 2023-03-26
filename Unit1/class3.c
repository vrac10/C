/*
Data Types in c:
1) User Defined - Structures , Enums , Union
2) Primary/Primitive - Int , Char, Float , Double
3) Secondary/Derived - Arrays , Pointers

Qualifiers:
1) Type - constant and volatile
2) size - short and long 
3) sign - signed and unsigned

Float is 6 digits after the decimal point
Double is 14 digits after th edecimal point

In unsigned int the values are restriced from 0 to 4*10^9 ish values and for signed its -2*10^9 to 2*10^9 so if we 
try to print anything else out of the signed's range it gives us -1

*/

/*
#include <stdio.h>
int main(){
    int a=156 , b =78;
    float c = 26330.147363863938;
    char d[15] = "C pgm";
    printf("%s\n",d);
    printf("%4.3f\n",c); //4 is width and 2 is precision
    printf("%5d\n" ,b); // the '5' or any such number is used to give a justification space in front of the number
    printf("rama \r sita \r PES \rUniversity \n");
    printf("----------------------------------------\n");
    printf("\t rama \t sita \n");
    printf("\"MAHABHARATHA\"\n");
    return 0;
}
*/

/*
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){

    unsigned int i = -10;
    printf("%d\n",i);
    printf("%d %d %d\n", sizeof(int),INT_MIN,INT_MAX);
    printf("%d %d %d\n", sizeof(char),CHAR_MIN,CHAR_MAX);
    printf("%d %e %e\n", sizeof(float),FLT_MAX,FLT_MIN);
    printf("%d %e %e\n", sizeof(double), DBL_MIN,DBL_MAX);

    return 0;
}
*/

#include <stdio.h>

int main(){
    char c;
    printf("enter a character\n");
    c = getchar(); // getchar works like scanf and gives only takes the first character
    putchar(c); // prints c

    for(int i=0; i < 10 ; ++i){
        printf("%d", i);
    }
    return 0;
}

