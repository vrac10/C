#include<stdio.h>
#include<string.h>

int my_strlen(char a[]);
int my_strcmp(char* a, char* b);

int main(){
    // char a[] = {'a','t','m','a','\0'};
    // printf("size of a is %d\n",sizeof(a));
    // printf("a = %s\n",a);
    // printf("length of a = %d\n",strlen(a));
    // char b[] = "atma";
    // printf("size of b is %d\n",sizeof(b));
    // printf("b = %s\n",b);
    // printf("length of b = %d\n",strlen(b));

    // //str copy
    // char c[10];
    // ; //(destination,source)
    // printf("b = %s, c = %s\n", b,c);
    // b[0]= 'A';
    // printf("b = %s, c = %s",b,c);

    //string concatenation  
    // char a[100] = {'a','t','m','a'};
    // char b[10] = "parmatma";
    // strcat(a,b); //(destination,source)
    // printf("%s is the concatenated string!", a);

    //string compare

    // char a[] = "atma";
    // char b[] = "aarm";
    // char c[] = "atmaa";
    // printf("strcmp is %d\n",strcmp(a,b));
    // printf("strcmp is %d\n",strcmp(a,c));
    // printf("strcmp is %d\n",strcmp(b,a));

    //string positon 
    // char a[] = "paramathma";
    // char b = 'a';
    // char *p;
    // p = strchr(a,b);
    // int index = (strlen(a) - strlen(p)); //to find the index of the first occurence of the character in a string 
    // printf("the string index of %c = %d\n",b,index);
    // char ch2 = 'b';
    // p = strchr(a,ch2);
    // printf("the string after %c = %s\n",ch2,p);
    // char a[100];
    // printf("Enter the sring: \n");
    // scanf("%[^\n]s",a);
    // printf("leght is %d\n",my_strlen(a));
 

    char str1[20];
    char str2[20];
    printf("enter two strings\n");
    scanf("%s",str1);
    scanf("%s",str2);
    int res = my_strcmp(str1,str2);
    printf("%d-----\n",res);
    if(!res)
        printf("equal\n");
    else
        printf("not equal\n");
    return 0;
}

int my_strlen(char a[]){
    int i = 0;
    while(a[i] != '\0'){
        i++;
    }
    return i;

    //Pointer method
    // while(*a){
    //     i++;
    //     a++;
    // }
    // return i;
}

int my_strcmp(char* a, char* b){
    int i;
    for(i = 0; a[i] != '\0' && b[i] != '\0' && a[i] != b[i];i++);
    return a[i] - b[i];
}