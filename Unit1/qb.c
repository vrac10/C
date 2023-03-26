#include<stdio.h>
int main(){

// Write a C program to find odd or even no using bitwise operators.
// int a,z;
// scanf("%d",&a);
// z = a;
// if(z&1 == a){
//     printf("the given number is odd");
// }
// else{
//     printf("the given number is even");
// }

// Write a C program to calculate sum of first and last digit of a given number.
// int n,f_l_sum=0;
// scanf("%d",&n);
// while(n>=1){
//     f_l_sum += n%10;
//     n /= 10;
// }
// printf("sum of the first and last digit of the given number is %d",f_l_sum);

// Write a C program to accept a four-digit number from user. Count zero, odd and even
// digits in the entered number.

// int k,zeroes=0,odd=0,even=0;
// scanf("%d",&k);
// while(k>=1){
//     zeroes += k%10==0?1:0;
//     odd += k%2==0?0:1;
//     even += k%2?1:0;
//     k /= 10;
// }
// printf("The number of zeroes in the entered number = %d\n",zeroes);
// printf("The number of odd digits in the entered number = %d\n",odd);
// printf("The number of even digits in the given number = %d\n",even);

// Write a C program to generate following pattern for n lines.

// int l;
// scanf("%d",&l);
// for(int i=0; i<l;i++){
//     for(int k = 0;k<l-i;k++){
//         printf(" ");
//     }
//     for(int j = 0; j <= i ; j++){
//         printf("* ");
//     }
//     printf("\n");
// }
// int n;
// scanf("%d",&n);
// for(int i=0; i<n;i++){
//     for(int k = 0;k<i;k++){     
//         printf(" ");
//     }
//     for(int j = n-i; j > 0 ; j--){
//         printf("* ");
//     }
//     printf("\n");
// }

// Write a C program to count number of bits set to 1 in an Integer

// int k,n=0;
// scanf("%d",&k);
// while(n>)

// Write a C program to check whether a given number is palindrome or not.

// int n,k=1,z;
// scanf("%d",&n);
// z=n;
// while(z>=1){
//     k = k*10 + (z%10);
//     z = z /10;
// }
// printf("%d is%sa palindrome!\n",n,k==n?" Not ":" ");

// C program to print the series from 1 to 10 and skip numbers 6 and 8.

// for(int i = 1; i<=10;i++){
//     if(i == 6 || i == 8){
//         continue;
//     }
//     else{
//         printf("%d\n",i);
//     }
// }

// C program to find number of days in a month using switch case

// int a;
// printf("Enter the number of the month(1-12): ");
// scanf("%d",&a);
// switch(a){
//     case 1:
//     printf("31 Days");
//     break;
//     case 2:
//     printf("28/29 Days");
//     break;
//     case 3:
//     printf("31 Days");
//     break;
//     case 4:
//     printf("30 Days");
//     break;
//     case 5:
//     printf("31 Days");
//     break;
//     case 6:
//     printf("30 Days");
//     break;
//     case 7:
//     printf("31 Days");
//     break;
//     case 8:
//     printf("31 Days");
//     break;
//     case 9:
//     printf("30 Days");
//     break;
//     case 10:
//     printf("31 Days");
//     break;
//     case 11:
//     printf("30 Days");
//     break;
//     case 12:
//     printf("31 Days");
//     break;
// }

// Write a C program to generate following pattern for n lines.
// A 
// B B 
// C C C 
// D D D D 
// E E E E E 

// char a = 'A';
// for(int i = 0; i < 5; i++){
//     for(int j = 0; j <= i; j++){
//         printf("%c ",a);
//     }
//     printf("\n");
//     a++;

// }

// Write a C program to accept 'n' different numbers and display sum of all positive & negative
// numbers
// int n, negatives_sum=0,positives_sum=0;
// printf("How many numbers? : ");
// scanf("%d",&n);
// while(n--){
//     int t;
//     scanf("%d", &t);
//     if(t < 0){
//         negatives_sum += t;
//     }
//     else{
//         positives_sum += t;
//     }
// }
// printf("The sum of all positive numbers is %d\nThe sum of all negative numbers is %d\n",positives_sum,negatives_sum);

// Write a program, which accepts a number and displays each digit in words.

// int n,reverse=1,digit;
// scanf("%d",&n);
// while(n>=1){
//     reverse = (reverse*10) + (n%10);
//     n /= 10;
// }
// while(reverse>1){
//     digit = reverse % 10;
//     switch(digit){
//         case 0:
//         printf("Zero ");
//         break;
//         case 1:
//         printf("One ");
//         break;
//         case 2:
//         printf("Two ");
//         break;
//         case 3:
//         printf("Three ");
//         break;
//         case 4:
//         printf("Four ");
//         break;
//         case 5:
//         printf("Five ");
//         break;
//         case 6:
//         printf("Six ");
//         break;
//         case 7:
//         printf("Seven ");
//         break;
//         case 8:
//         printf("Eight ");
//         break;
//         case 9:
//         printf("Nine ");
//         break;
        
//     }
//     reverse =reverse/10;
// }

// To take number of rows as input and print a hollow diamond

// int n;
// scanf("%d",&n);
// for(int i=1; i < n; i++){
//     for(int j = 0; j<=n-i-1;j++){
//         printf(" ");
//     }
//     for(int k = 1; k <= 2*i-1; k++){
//         if(k == 1 || k == 2*i-1){
//             printf("*");
//         }
//         else{
//             printf(" ");
//         }
//     }
//     printf("\n");
// }

// for(int l = n-1; l > 0; l--){
//     for(int m = n-1; m >= l; m--){
//         printf(" ");
//     }
//     for(int o = 1; o <= 2*l-2; o++){
//         if(o == 2 || o == 2*l-2){
//             printf("*");
//         }
//         else{
//             printf(" ");
//         }
//     }
//     printf("\n");
// }

int a; printf("%d",a=10 | 2==2);

}

