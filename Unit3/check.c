
#include<stdio.h>

#include<stdlib.h>
int main(){ char *p = calloc(100, 1); p = "welcome"; printf("%s", p); //free(p);
}