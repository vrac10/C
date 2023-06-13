// #include<stdio.h>
// #include<string.h>

// struct date{
//     int day;
//     int month;
//     int year;
// };

// int compareDates(const struct date a, const struct date b){
//     if(a.year > b.year){
//         return 1;
//     }
//     else if(a.year == b.year){
//         if(a.month > b.month){
//             return 1;
//         } else if (a.month == b.month){
//             if(a.day > b.day){
//                 return 1;
//             }
//             else if(a.day == b.day){
//                 return 0;
//             }
//             else{
//                 return -1;
//             }
//         }
//         else{
//                 return -1;
//             }
//     }
//     else{
//             return -1;
//         }

// }

// int main(){
//     struct date d1,d2;
//     printf("Enter the first date in DD/MM/YYYY format: ");
//     scanf("%ds%d/%d", &d1.day,&d1.month,&d1.year);
//     printf("Enter the second date in DD/MM/YYYY format: ");
//     scanf("%d/%d/%d", &d2.day,&d2.month,&d2.year);
//     if(compareDates(d1,d2) == 0){
//         printf("The dates are equal.");
//     }
//     else if(compareDates(d1,d2) == -1){
//         printf("Date1 > Date2");
//     }
//     else if(compareDates(d1,d2) == 1){
//         printf("Date2 > Date1");
//     }




// }

#include <stdio.h>

int main(){
    struct book{
        int price;
    }
}