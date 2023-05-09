#include<stdio.h>
// Formula to calculate size of the array = sizeof(a)/sizeof(a[0])
void readArray(int a[], int n){
    for(int i = 0; i < n; i++){
        int x = 0;
        scanf("%d",&x);
        a[i] = x;
    }
}

void displayArray(int a[], int n){
    for(int j = 0; j < n; j++){
        printf("The %d element is %d\n",j,a[j]);
    }
}

void changeElement(int a[]){
    int x,y,z;
    printf("Which index do you want to edit? : ");
    scanf("%d",&x);
    printf("Current value: %d\nModified value: ",a[x]);
    scanf("%d",&z);
    a[x] = z;
}

void addFL(int a[],int n){
    int size = sizeof(a)/sizeof(a[0]);
    int sum = a[0] + a[size-4];
    printf("The sum of the first and last element is %d", sum);
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    readArray(a,n);
    displayArray(a,n); 
    changeElement(a);
    displayArray(a,n);
    printf("size %d", sizeof(a)/sizeof(a[0]));
    addFL(a,n);
   
 }