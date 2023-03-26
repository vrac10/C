#include <stdio.h>
#include <math.h>
int main(){
    // Arm strong number
     int sum = 0, digit = 0, y = 1,z, number_digits = 0;
    // scanf("%d",&n);
    // x = n; 
    
    // while(x >= 1){
    //     number_digits++;
    //     x = x/10;
    // }
    // z = number_digits;
    // x = n;
    // digit = 0;
    // for(int i = 0; i < number_digits; i++){
    //     digit = x % 10;
    //     while(z--){
    //         y = y * digit;
    //     }
    //     z = number_digits;
    //     sum += y;
    //     y = 1;
    //     x = x/10;
    // }

    // if(n == sum){
     
    //     printf("Yes\n");
    // }
    // else{

    //     printf("No\n");
    // }

    // FInd the armstrong numbers 
    int x;
    scanf("%d", &x);
    for(int i = 0; i < pow(10,3); i++){
            y = i;
          while(y >= 1){
                number_digits++;
                y = y / 10;
            }
            y = i;
            for(int j = 0; j < number_digits; j++){
                digit = y % 10;
                sum += pow(y,number_digits);
                y = y/10;
            }
    if(sum == i){
        printf("The armstrong number is %d\n", i);
    }
    sum = 0;
}


}