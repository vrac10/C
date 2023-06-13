#include<stdio.h>
#include<errno.h>

/*
MODE     READ     WRITE    CREATE NEW FILE   TRUNCATE
r        Yes      No        No                No
w        No       Yes       Yes               Yes
a        No       Yes       Yes               No
r+       Yes      Yes       No                No
w+       Yes      Yes       Yes               Yes
a+       Yes      Yes       Yes               No

Error Handling:
1) Not supported by C directly and is accomplished by using errno.h
2) When a function is called a global variable name as errno is auto matically assigned a value used to identify the type 
   of error that has been encountered 

1 - operation is not permitted
2 - No such file or directory
5 - I/O error
7 - Argument list too long 
9 - Bad file number 
11 - Try again
12 - Out of memory
13 - Permission Denied

Two status library functions are use tp prevent perfoming any operation beyond EOF

feof(): Used to test for an end of file condition
    Syntax - 

ferror(): Used to check for the error in the stream 
    Syntax - int ferrror(FILE *ptr);

*/

int main(){
    FILE *fp,*fp1;
     //= fopen("data.txt","r");
    // if(fp == NULL){
    //     perror("fopen");
    // }
    // else{
    //     printf("%d\n",ftell(fp));
    //     printf("%d\n",fseek(fp,5,SEEK_SET));
    //     printf("%d\n",ftell(fp));
    // }

fclose(fp,fp1);
}
