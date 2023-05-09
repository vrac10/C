#include<stdio.h>

void readMatrix(int m, int n , int a[m][n]){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            int x = 0;
            scanf("%d",&x);
            a[i][j] = x;
        }
    }

}

void displayMatrix(int m, int n, int a[][n]){
      for(int i = 0; i < m; i++){
        for(int k = 0; k<n; k++){
            printf("%d ",a[i][k]);
        }
        printf("\n");
    }
}

void multiplyMatrix(int m, int n, int a[m][n], int p, int q, int b[p][q],int c[m][q]){
    if(n != p){
        printf("Matrix multiplication is not possible");
    }
    else{
        int x = 0;
        int k[100];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < p; j++){
                x = x + ((a[i][j]) * (b[j][i]));
            }
            k[i] = x;
            x = 0;
        }
        for(int z = 0; z < m; z++){
            for(int l = 0; l < q; l++){
                c[z][l] = k[x++];
            }
        }
    }
}

int main(){
    int m,n,p,q;
    scanf("%d %d",&m,&n);
    scanf("%d %d",&p,&q);
    int a[m][n];
    int b[p][q];
    int c[m][q];
    readMatrix(m,n,a);
    readMatrix(p,q,b);
    multiplyMatrix(m,n,p,q,a,b,c);
    // displayMatrix(m,q,c);



}
