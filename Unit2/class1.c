#include<stdio.h>
#include<ctype.h>
#include<math.h> 

int main(){
 
    // char c;
    // printf("Enter a character: ");
    // scanf("%c",&c);
    // if(isalpha(c)){
    //     if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
    //         printf("%c is a vowel\n",c);
    //     }
    //     else{
    //         printf("%c is a consonant\n",c);
    //     }
    // }
    // else{
    //     printf("Error, Non alphabetic character\n");
    // }
    // int n,y=0,x=0;
    // scanf("%d",&n);
    // while(n){
    //     y = n % 10;
    //     x = x*10 + y;
    //     n = n /10;
    // }
    // printf("%d",x);

    // int n,y = 0, j,x=0;
    // scanf("%d",&n);
    // while(n>=1){
    //     j = n%10;
    //     if(j == 0){
    //         x++;
    //     }
    //     else if (j ==1){
    //         y += pow(2,x);
    //         x++;
    //     }
        
    //     n = n /10;
    // }

    // printf("%d",y);

    // int n , number = 1;
    // scanf("%d",&n);
    // for(int i = 0; i<n; i++){
    //     for(int k = 1; k < n-i; k++){
    //         printf(" ");
    //     }

    //     for(int j = 0; j<=i;j++){
            
    //         printf("%d ", number);
    //         number++;
    //     }

    //     printf("\n");
    // }

    int n , number = 1;
    scanf("%d",&n);
    for(int i = 0; i<n; i++){
        for(int k = 1; k <=n-i; k++){
            printf(" ");
        }

        for(int j = 0; j<=i;j++){
            if(number < 10){
                printf("0");
            }
            printf("%d ", number);
            number++;
        }

        printf("\n");
    }

}