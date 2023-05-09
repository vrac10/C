/*
Character array:
char a[10] = {'h','e','l','l','o','\0'};
\0 is a null character which has an ascii value of 0.

String:
char variable_name[size];


*/
#include<stdio.h>

void readArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        int x = 0;
        scanf("%d",&x);
        arr[i] = x;
    }
}

void displayArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int checkPosValidity(int n, int pos){
    if(pos < 0){
        return 0;
    }
    else if(pos >= n){
        return 0;

    }
    else{
        return 1;
    }
}

void delEleAtPos(int arr[], int *n, int pos){
    if(checkPosValidity){
        for(int i = pos; i < *n; i++)
        {   
           arr[i] = arr[i+1];
        }    

        (*n)--;

   }
   else{
       printf("Invalid position");
   }
}

int main(){

    int n;
    scanf("%d",&n);
    int a[n];
    readArray(a,n);
    int pos = 1;
    scanf("%d",&pos);
    printf("%d\n",pos);
    displayArray(a,n);
    delEleAtPos(a,&n,pos);
    displayArray(a,n);

}