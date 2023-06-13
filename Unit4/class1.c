/*
File Handling:
fopen, fegtc, fputc

Syntax of fopen: fopen is a c library function used to open an existing file or create a new file 

The basic format of fopen is
FILE *fopen(cionst char * filepath, const char * mode);

Syntax of fgetc:int fegtc(FILE *p);
Synatx of fputc:int fputc(int c, FILE *fp); */

#include<stdio.h>

int main(){
    FILE* fp = fopen("data.txt","r");
    if(fp == NULL){
        printf("File cannot be opened\n");
    }
    else{
        printf("fp = %p\n",fp);
        char ch;
        while((ch=fgetc(fp)) != EOF){
            fputc(ch,stdout);

        }
        fclose(fp);
    }
}