/*
Bitwise operator:
1) Set bit : This expression sets a particular bit in a bits sequence to 1 
            Expression a = n|1<<(k-1)
2) Clear bit : This expression clears a particular bit in a bits sequence and makes it 0
              Expression a = n&~(1<<(k-1))
3) Toggle bit : This expression changes a particular bit in a bits sequence to 0 if 1 and 1 if 0
               Expression a = n^1<<(k-1)
4) Left shift : Whenever we do left shitft its like multiplied by 2
5) Right shift : Whenever we do right shitft its like divided by 2

Ternary operator:
'?' 
Syntax - expression ? value/expression : value/expression

Sequence point operation:

*/

#include<stdio.h>

int main(){
    /*int n=5, k=2 , a, b ,c;
    a = n|1<<(k-1);
    b = n&~(1<<(k-1));
    c = n^1<<(k-1);
    printf("a = %d, b = %d, c = %d", a, b, c);*/

    //pointer address
    int a=10,b=10;
    int *p;
    p = &a;
    printf("a is %d\n",&a);
    printf("p = %d, a=%d\n",p,a);
    printf("a value = %d\n",*p);
    printf("%d\n",b++==10&&b==11);

    return 0;


}