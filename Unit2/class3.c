#include<stdio.h>4


// int fact(int a){
//     if(a == 0 || a == 1){
//         return 1;
//     }
//     else{
//         return a*fact(a-1);
//     }
// }

// sum of n natural numbers
int sum(int a){
    if(a == 0){
        return 0;
    }
    else{
        return a + sum(a-1);
    }
}

int main(){
    // Recursion
    // printf("Hello from main\n");
    // main();  // Segmentation fault + infinite loop

    // Factorial using recursion

    int n;
    scanf("%d",&n);
    int answer = sum(n);
    printf("%d\n",answer);


}

