#include<stdio.h>

 struct student {
        int n;
        char a[100];
    };

int main(){
 

    int n = 9;
    for(int i = 0; i < n; i++){
        if(i == n/2){
            for(int j = 0; j < n;j++){
                printf("* ");
            }
        }
        else{
            for(int k = 0; k < n-1; k++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }


}