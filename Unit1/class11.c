/*
Unconditional control statements:-
1) break
2) continue
3) goto : SYNTAX- goto label;
4) return
*/

#include <stdio.h>
int main(){
    // for(int i=1;i<=5;i++){
    //     if(i%2==0){
    //          continue;
    //     }
    //     printf("%d ",i);
    // }

    // printf("Hello");
    // goto l1;
    // printf("How are:");
    // l1:printf("you");
    // return 0;

    // Construct a c program to reverse bits of an integer

    // int n,x,no_of_digits=0;
    // scanf("%d",&n);
    // x = n;

    // while(x >= 1){
    //     no_of_digits++;
    //      x = x/10;
    // }

    // while(no_of_digits!=0){
    //     n = n^1<<(no_of_digits-1);
    //     no_of_digits--;
    // }
    // printf("%d",n);

    // construct a menu based calculator to perform addition subtraction multiplication for complex numbers
    int a=0,b=0,c=0,d=0,sum = 0 , multi=0 ;
    printf("First Complex Number\n");
    printf("Enter the real part of the complex number: ");
    scanf("%d",&a);
    printf("Enter the imaginary part of the complex number: ");
    scanf("%d",&b);
    printf("First Complex Number: %d + %di\n",a,b);

    printf("Second Complex Number\n");
    printf("Enter the real part of the complex number: ");
    scanf("%d",&a);
    printf("Enter the imaginary part of the complex number: ");
    scanf("%d",&b);
    printf("Second Complex Number: %d + %di\n",a,b);

    int x = 0;
    printf("What operation would you like to perform + , - , x (1-3): ");
    scanf("%d",&x);

    switch(x){
          case 1:
          int add_r = a+c;
          int add_i = b+d;
          printf("The sum of the given complex numbers is %d + %di\n",add_r,add_i);
          break;
          
          case 2:
          printf("The difference of the given complex numbers is %d + %di\n",a-c,b-d);

          case 3:
          multi = a*c + (b*d*(-1));
          printf("The multiplication of the given complex numbers is %d + %di\n",multi,(b*c + a*d));
    } 


    
}