#include<stdio.h>
int find_sum(int);
int main(){
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("sum of all factors is %d\n",find_sum(n));
    return 0;
}
int find_sum(int n){
    int i;
    int sum = 0;
    int res;
    for(i = 1;i<=(n/2);i++){
        if(n%i == 0){
            sum+=i;
        }
    }
    if(n%i == 0){
        res = sum + i + n;
    }
    else{
        res = sum + n;
    }
    return sum;
}