/*
1)Write functions to
a) Reverse a string. 
b) Check for equality of strings

2)Write function to find all occurrences of a character in a string and use this function to 
replace all occurences of a character by specific character.

3)Write a function to remove all repeated characters from a given string and display the 
string without duplicate characters.
*/


#include<stdio.h>
#include<string.h>


void str_cat(char *a, char *b);


int main(){
 

    // char a[100];
    // printf("Enter the string: ");
    // scanf("%s",a);
    // char b[100];
    // char temp; 
    // int j = 0;
    // strcpy(b,a);
    // for(int i = strlen(a) - 1; i >= (strlen(a)/2); i--,j++){
    //    temp = a[i];
    //    a[i] = a[j];
    //    a[j] = temp;
    // }
    // printf("The reversed string is : %s\n",a);
    // if(strcmp(a,b) == 0){
    //     printf("The given string is a palindrome.");
    // }
    // else{
    //     printf("The given string is not a palindrome.");
    // }

    // char a[100];
    // printf("Enter the string : \n");
    // scanf("%[^\n]s",a);
    // char x;
    // printf("Enter the character to replace : ");
    // scanf(" %c",&x);
    // char y;
    // printf("Enter the character : ");
    // scanf(" %c",&y);
    // for(int i = 0; i < strlen(a); i++){
    //     if(a[i] == x){
    //         a[i] = y;
    //     }
    // }
    // printf("The new string is : %s",a);

//   char a[100];
// printf("Enter the string: ");
// scanf("%99[^\n]", a);

// int len = strlen(a);
// for(int i = 0; i < len; i++){
//     for(int j = i+1; j < len; j++){
//         if(a[j] == a[i]){
//             for(int k = j; k < len; k++){
//                 a[k] = a[k+1];
//             }
//             len--;
//             j--;
//         }
//     }
// }
// a[len] = '\0'; // Add null terminator at the end of the updated string

// printf("%s", a);

//  char a[] = "whatsapp"; 
//  char *b = "when"; 
//  int i; 
//  for(i=0;*b!='\0';i++,b++) {
//      a[i]=*(b+i); 
//      } 
//      printf("%s",a);

        // int a[10] = {1,2,3,4,5};
        // printf("%d",sizeof(a));

char a[] = "Pesunivers";
char b[] = "Pesunivers";
str_cat(a,b);
printf("%s %s",a,b);

}

void str_cat(char *a, char *b){

    int j;
    int i = strlen(a);
    for(j = 0; b[j] != '\0'; j++,i++){
        a[i] = b[j];
    }
    a[i] = '\0';

}