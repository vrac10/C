#include <stdio.h>
#include "palin.h"

int main(){
    int n;
    scanf("%d",&n);
    if(ispalindrome(n)){
        printf("The number %d entered by the user is a palindrome",n);
    }
    else{
        printf("%d is not a palindrome", n);
    }
    return 0;
}