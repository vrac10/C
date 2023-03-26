#include<stdio.h>
int main(){
    // int x,sum_digits=0,y;
    // scanf("%d", &x);   
    // y = x; 
    // while(y >=1){
    //     sum_digits += y%10;
    //     y = y/10;
    // }
    // if(x % sum_digits == 0){
    //     printf("YES it is divisible by the sum of its digits.\n");
    // }
    // else{
    //     printf("NO it is not divisible by the sum of its digits.\n");
    // }
    int math,phys,chem,total;
    scanf("%d %d %d",&math,&phys,&chem);
    total = math+phys+chem;
    if(math >=65 && phys >=50 && chem >= 55 && (total >= 190 || math+phys >= 140)){
            printf("You are elgible for the course.");
        
    }
    else{
        printf("You are not eligible for the course.");
    }


}