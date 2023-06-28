#include<stdio.h>
#include<string.h>

/*
Create a Structure called hotel with following members c_name, No_days, phone number as
nested structure with its members as mob and alternate number. Write a function to read
details from the user. Also calculate the bill (per day charges is 2000 and 8.5%tax on total
bill) and Display appropriate message.
*/

// struct hotel{
//     char c_name[100];
//     int no_days;
//     struct phonenumber{
//         long int mob;
//         long int alt_number;
//     }pn;
// };

// void read(struct hotel *s){
//     printf("Enter you name: ");
//     scanf("%[^\n]s",&s->c_name);
//     printf("Enter the number of days of you stay: ");
//     scanf(" %d",&s->no_days);
//     printf("Enter your mobile number: ");
//     scanf(" %ld",&s->pn.mob);
//     printf("Enter your alternate phone number: ");
//     scanf(" %ld",&s->pn.alt_number);
//     printf("\nWelcome %s!\n",s->c_name);
// }

// int main(){

//     struct hotel s1;
//     read(&s1);
//     int perday = 2000;
//     float tax = 0.085;
//     float total = (perday*s1.no_days) + (tax*(perday+s1.no_days));
//     printf("Bill\nTotal\t%.2f\n",total);
// }

/*
Create a structure called Book with members as Book_name,
Author _name, Edition,
Publication, year and price. Show the menu to the user to do the following: Read book data,
Display the book data if the user enters the book name. Display appropriate message.
*/


// struct Book{
//     char book_name[100];
//     char author_name[100];
//     int edition;
//     char publication[100];
//     int year;
//     int price;
// }s[10];

// void display(char *bookname){
//     for(int i = 0; i < 10; i++){
//         if(strcmp(bookname,s[i].book_name)==0){
//             printf("Book : %s\n",bookname);
//             printf("Author : %s\n",s[i].author_name);
//             printf("Edition : %d\n",s[i].edition);
//             printf("Publication : %s\n",s[i].publication);
//             printf("Year : %d\n",s[i].year);
//             printf("Price : %d\n",s[i].price);
//             break;
//         }
//     }
    
// }

// void read(char *bookname,int *n){
//     if((*n)<=10){
//          printf("Book : %s\n",bookname);
//          strcpy(s[(*n)].book_name,bookname);
//          printf("Author : ");
//          scanf(" %[^\n]s",s[(*n)].author_name);
//          printf("Edition : ");
//          scanf(" %d",&s[(*n)].edition);
//          printf("Publication : " );
//          scanf(" %[^\n]s",&s[(*n)].publication);
//          printf("Year : ");
//          scanf(" %d",&s[(*n)].year);
//          printf("Price : ");
//          scanf(" %d",&s[(*n)].price);
//     *n = *n + 1;
//     }
//     else{
//         printf("Max reached\n");
//     }


// }

// int main(){
//     char book[50];
//     int n = 0;
   
//     int x = 0;
//     while (x != -1){
//      printf("Enter the book name : ");
//     scanf("%[^\n]s",book);
//     printf("What would you like to do? read/display(1 or 2): ");
//     scanf("%d",&x);
//     switch(x){
//         case 1:
//         read(book,&n);
//         break;

//         case 2:
//         display(book);
//         break;

//         default : printf("Enter a valid number!\n");break;
//     }
// }
// }

/*
Write a program to create a structure called weather_Report with data members rainfall,
temperature and city name. Create a function to read and display the details of 3 cities. Also
write a function to display the city name with maximum temperature.
*/
// typedef struct weather_report{
//     int rainfall;
//     int temp;
//     char cityname[100];
// }wr;

// void read(wr *s){
//     printf("Enter the city name: ");
//     scanf(" %[^\n]s",s->cityname);
//     printf("Enter the temperature: ");
//     scanf(" %d",&s->temp);
//     printf("Enter the rainfall (in cm): ");
//     scanf(" %d",&s->rainfall);
// };

// void max(wr s1, wr s2, wr s3){
//     if(s1.temp > s2.temp && s1.temp > s3.temp){
//         printf("Max temperature %d is of %s",s1.temp,s1.cityname);
//     }
//     else if(s2.temp > s1.temp && s2.temp > s3.temp){
//         printf("Max temperature %d is of %s",s2.temp,s2.cityname);
//     }
//     else  if(s3.temp > s1.temp && s3.temp > s2.temp) {
//         printf("Max temperature %d is of %s",s3.temp,s3.cityname);
//     }
// }

// int main(){
//     wr s1,s2,s3;
//     read(&s1);
//     read(&s2);
//     read(&s3);
//     max(s1,s2,s3);
// }

