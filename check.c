#include <stdio.h>
/*
int main(){
    int a,last_digit,odd_sum=0,even_sum=0;
    printf("enter the number:");
    scanf("%d",&a);
    last_digit = a%10;
    while(a>1){
        a = a / 10;
        if((a%10) % 2 == 0){
            even_sum += (a%10); 
        }
        else{
            odd_sum += (a%10);
        }
    }
    if(last_digit%2 == 0){even_sum += last_digit;}
    else{odd_sum += last_digit;}
    printf("even_sum : %d\n",even_sum);
    printf("odd_sum : %d\n",odd_sum);
    printf("Difference : %d\n",(odd_sum - even_sum));
}
*/

int check_prime(int number);

int main(){
    int number,count_c=0,count_p=0, prime;

    do{
        printf("Enter the number:");
        scanf("%d",&number);
        if(number != -1){
            
            prime = check_prime(number);

            if(prime == 1){
                count_p += 1;
            }
            else{
                count_c += 1;
            }
        }
    } while(number != -1);

    printf("the number of prime numbers entered is %d\n", count_p);
    printf("the number of composite numbers entered is %d\n", count_c);
}

int check_prime(int number){
    int prime = 1;
     for(int j = 2; j < number; j++)
                if(number % j == 0){
                    prime = 0;
                    break;
                }
                else{
                    prime = 1;
                }
                
            return prime;
}