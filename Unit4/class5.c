#include<stdio.h>

/*Selection sort: the selection sort algotithm sitts an array by reoeatedlyt finding the minimum elemnt from tge unsorted partby putting it
                    in the beginning */

int main(){
    int a[5] = {80,17,3,10};
    // Selection sort:
    int i; int k;
    int pos;
    for(i = 0; i < 4; i++){
        pos = i;
        for(k = i+1; k < 4; k++){
            if(a[pos] > a[k]){
                pos = k;
            }
        }
        if(pos != i){
            int temp = a[i];
            a[i] = a[pos];
            a[pos] = temp;
            
        }
    }

    for(int j = 0; j  < 4; j++){
        printf("%d ",a[j]);
    }

    // Bubble sort;
    int b[5] = {80,17,3,10};

    for(int f = 0; f < 5; f++){
        
        for(int l = 0; l < 5; l++){
            if(b[f] > b[l]){
                int temp = b[f];
                b[f] = b[l];
                b[l] = temp;
                break;
            }
        }
        
    }
    for(int j = 0; j  < 4; j++){
        printf("%d ",b[j]);
    }

}