#include<stdio.h>
void read(int n; int [][n],int m ,int n);
void display(int[][100], int m, int n);

int main(){

    //int arr[][] = {11,22,33,44,55,66} wont work since column parameter is mandatory
    //int abc[3][2] = {{11,22},{33,44},{55,66}};
    int a[100][100];
    int n;
    int m;
    printf("enter the number of rows and number of columns\n");
    scanf("%d%d", &m,&n);
    read(a,m,n);
    printf("elements in the 2D array are \n");
    display(a,m,n);
    // C is row major ordering : All elements of onbe row are followed by all elements of the next row and so on.
    // Address of A[i][j] = Base_address + ((i* no. of columns in every row)+j)) * size of every element 

}

void read(int n;int a[][n], int m , int n){
    int i,j;
    for(i = 0;i < m;i++){
        for(j = 0; j < n; j++){
            printf("Enter the element: ");
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    
}

void display(int a[][100], int m, int n){
     int i,j;
    for(i = 0;i < m;i++){
        for(j = 0; j < n; j++){
            printf("%d\t",a[i][j]);
            
        }
        printf("\n");
    }
    
}

