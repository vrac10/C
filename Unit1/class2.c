/* 
Formatted output function - printf
1) int printf(const char *format)
2) Predefined function declared in stdio.h
3) Send formatted output to stdout by default
4) Has the capability to evaluate 
5) On success it returns the number of characters entered in the string

Formatted input function - scanf
1) int scanf(const char *format, .. )
2) & : Adress operator is compulsory in scaf for all primary types
3) This function returns the following value:
    a) >0 - The number of intems converted and assigned successfully
    b) 0 - No item was assigned
    c) <0 - Read error encountered or end of file error

Format specifiers in C:
1) Integer - short signed %d or %i
             short unsigned %u
             long signed %ld
             long unsigned %lu
             unsigned hexadecimal %x
             unsigned octal %o
2) Real - float %f
          double %lf
3) Character - signed character %c
               unsigned character %c
4) String - %s

Esacape Sequences:
\n - new line
\t - tab space
\r - carriage return
\a - 
\" - double quote
\\ - backslash
\b - backspace

*/
#include<stdio.h>

int main(){
    int a,m,n,z;
    printf("Enter a number \n");
    scanf("%d", &a);  // & is used for address 
    printf("The number is = %d\n ", a);
    char t = 'k';
    t++;
    printf(" The new character is = %c\n",t);
    // m = scanf("%d %d", &a , &z);
    // printf("The return value of scanf is = %d\n", m);
    // n = printf("The number is = %d\n", a);
    // printf("The return value of printf = %d\n", n);

}