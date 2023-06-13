#include<stdio.h>

void insertionSort(int arr[],int n){
    int i, key, j;
    for(i = 1; i < n; i++){
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i<n;i++){
        printf("%d ",arr[i]);
    }
}

void arrayInitialise(int arr[], int n){
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}

int main(){
    int n;
    printf("Enter the number of elements you'd like to enter: ");
    scanf(" %d",&n);
    int arr[n];
    arrayInitialise(arr,n);
    printf("\n");
    printf("Before sorting\n");
    printArray(arr,n);
    printf("\n");
    insertionSort(arr,n);
    printf("After sorting \n");
    printArray(arr,n);
}