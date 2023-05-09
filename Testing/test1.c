
#include <stdio.h>

int fun(char *str1){ char *str2 = str1;

while(*++str1); printf("%s",str2); return (str1-str2);}

int main(){ char *str = "snowwhite"; printf("%d", "" - "hi"); return 0;}