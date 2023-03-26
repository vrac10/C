/*
Looping structures:
1) for(e1;e2;e3)
            <block>|<stmt>
2) while(e2)
            <block|<stmt>
3) do 
    <block>|<stmt>
    while(e2)

while(n--): (late reaction) in this the loop goes on till n becomes 0 but n as 1 being checked and n as 0 goes in to the while loop statements
while(--n): (quick reaction)*/

#include<stdio.h>

int main(){
    // int n = 5,x=5;
    // while(--n){
    //     printf("%d",n);
    // }

    // printf("\n");

    // for(int i = 5; i > 0; i--){
    //     printf("%d",i);
    // }

    // printf("\n");

    // do{
    //     printf("%d",x--);
    // }while(x>0);

    // printf("\n");

    //To find GCD of two numbers using while loop
    // int number1, number2, remainder;
    // scanf("%d %d",&number1,&number2);
    // remainder = number2 % number1;
    // while(number2 % remainder != 0){
    //    number2 = number1;
    //     number1 = remainder;
    //     remainder = number2 % number1;  
    // }
    // printf("%d", remainder);

    // To find the sum of numbers 1 to n
    // int number1,i = 0,sum=0;
    // scanf("%d", &number1);
    // while(i <= number1){
    //     sum+=i++;
    // }
    // printf("%d\n",sum);

    // to accept a number and print the number of odd , even and zero digits
    // int number1,last,digit, odd_digit = 0,even_digit=0,zero=0;
    // scanf("%d",&number1);
    // last = number1 % 10;
    // even_digit = last%2==0?1:0;
    // odd_digit = last%2==0?0:1;
    // zero = last==0?1:0;
    // while(number1 > 1){
    //     number1 = number1 /10;
    //     digit = number1 % 10;
    //     if (digit == 0){
    //         zero++;
    //     }
    //     else if(digit % 2 == 0){
    //         even_digit++;
    //     }
    //     else{
    //         odd_digit++;
    //     }
    // }



    // printf("Odd digit: %d\n",odd_digit);
    // printf("Even digit: %d\n",even_digit);
    // printf("Zero: %d\n",zero);


    //to generate a pattern
    // int n,k=0;
    // scanf("%d",&n);
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<i;j++){
    //         printf(" ");
    //     }
    //     for(int k=0; k < n-i; k++){
    //         printf("* ");
    //     }
    //     printf("\n");
        
    // }

    // TO generate a basic pattern
    // char a = 'A';
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<=i;j++){
    //         printf("%c", a);
    //     }
    //     a = a+1;
    //     printf("\n");
    
    // }

    // To print a weird question
    // int n;
    // scanf("%d",&n);
    // for(int i=1; i<=n;i++){
    //     for(int j=1; j<=10;j++){
    //         printf("%d * %d = %d ",i,j,i*j);
    //     }
    //     printf("\n");
    // }

    //To print inverted half pyramid of numbers
    // int n = 5;
    // for(int i=0; i<n;i++){
    //     for(int j=1; j<= n-i;j++){
    //         printf("%d ",j);
    //     }
    //     printf("\n");
    // }

    // To print series of numbers
    // int i,n=5,count=0;
    // for(i = 1;i<=n;i++){
    //     for(int k = 1; k <= n-i; k++){
    //         printf(" ");
    //         count++;
    //     }
    //     int j;
    //     for(j=0;j<i;j++){
    //         printf("%d",i+j);

    //     }
    //     for(j = i-2; j>=0;j--){
    //         printf("%d", i+j);
            
    //     }
    //     printf("\n");
    // }

    // To print floyd's triangle
    // int n = 5, number = 1;
    // for(int i = 0; i<n; i++){
    //     for(int j = 1; j<=i;j++){
    //         printf("%d ", number);
    //         number++;
    //     }
    //     printf("\n");
    // }

    // hollow diamond
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n+n-1; i++){
        for(int j = 1; j <= i+1 ; j++){
            if(j == 1 || j == i+1){
                printf('*');
            }
           else{
                printf(' ');
           }
            
        } 
    }
}

