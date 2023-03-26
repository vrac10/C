/*
Identifiers:
1) It is a name used to identify a variable , keyword, function or any other user defined item
2) Rules of writing an identifier-
    a) A-Z
    b) a-z
    c) _ followed by zero or more letters 
    d) _(digits)
    e) few punctuation characters like # @ % not allowed

Variable: It has a name, location, life, scope and qualifier

Keywords: There are 32 keywords in c programming and these names cannot be used as variables

int z = 10
printf("%d %d %d %d", z,z++,++z,--z) Unspecific behaviour

Difference between bitwise and logical:
& - bitwise , && - logical
| - bitwise , || - logical
^ - bitwise , != - logical
~ - bitwise , ! - logical

&& expects its operand to be boolean and returns a boolean a value but bitwise and (&)
words on integral values and returns the same
&& doesnt evaluate if first operand becomes false 
|| doesnt evaluate if first operand becomes true
bitwise operands always evaluate in both ways(both the sides will always be evaluated) */

#include <stdio.h>
#include <math.h>
int main(){
 printf("%d",2&&2);
}