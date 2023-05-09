#include<stdio.h>
#include<string.h>
// #include"p.h"

int pattern_match(char text[],int n,char pat[],int m){
    int i,j;
    int res = -1;
    for(i = 0; res == -1 &&  i<=n-m; i++){
        for(j = 0; j < m && text[i+j] == pat[j]; j++);
        
        if(j==m)
            res = i;
            
    }
    return res;
}


int main(){
    char text[100];
    char pat[100];
    printf("enter the string \n");
    scanf("%[^\n]s",text);
    fflush(stdin);
    printf("enter the pattern\n");
    scanf("%[^\n]s",pat);
    int n = strlen(text);
    int m = strlen(pat);
    int pos = pattern_match(text,n,pat,m);
    if (pos == -1)
    printf("patterbn not found\n");
    else
    printf("pattern is found at %d\n",pos);

}