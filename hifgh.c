#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of array elements :");
    scanf("%d",&n);
    int a[n];

    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    int x;
    printf("Enter the number of array elements :");
    scanf("%d",&x);
    int b[x];

    for(int i = 0; i < x; i++){
        scanf("%d",&b[i]);
    }

   int  a1[n+x];//Union
   int a2[n];
   int dup = 0;

   int m=0,f = 0;

   for(int i = 0; i < n; i++){
        a1[i] = a[i];
        m++;
    }

    

   for(int j = 0; j < x; j++){
        for(int k = 0; k <= m; k++){
            if(a2[k] == b[j]){
                a2[f] = b[k];
                dup = 1;
                f++;
            }
        }

        if(dup == 0){
            a1[m] = a[j];
            m++;
        }
        else{
            dup = 0;
        }
   }

     for(int i = 0; i < m; i++){
        printf("%d",a1[i]);
    }

    // printf("\n");

    //  for(int i = 0; i < f; i++){
    //     printf("%d",a2[i]);
    // }


}