#include<stdio.h>

void unionIntersection(int a[],int b[], int m, int n){
    int Union[m+n];
    int Intersection[m];
    int j = 0;
    int x = 0;

    for(int i = 0; i < m; i++){
        Union[j] = a[i];
        j+=1;
    }

    int dup = 0;
    
    for(int i = 0; i < n; i++){
        for(int k = 0; k <= j; k++){
            if(Union[k] == b[i]){
                dup = 1;
                Intersection[x] = Union[k];
                x+=1;
            }
        }

        if(dup == 0){
            Union[j] = b[i];
            j+=1;
        }
        else{
            dup = 0;
        }
    }


    for(int i = 0; i < j; i++){
        printf("%d ",Union[i]);
    }

    printf("\n");

    for(int l = 0; l < x; l++){
        printf("%d ",Intersection[l]);
    }
}


int main(){

    int a[6] = {1,2,3,4,5,6};
    int b[6] = {4,5,6,7};

    unionIntersection(a,b,6,4);
    

}
