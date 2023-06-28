// Practice to understand how to sperate files and use maker file
// First read some inputs then test the other functions.

#include<stdio.h>
#include "interface.h"


int main(){
    int x = 0;
    int n = 0;
    while(x!=-1){
    printf("What would you like to do ? read/display/fetch (1,2,3) : ");
    scanf("%d", &x);

    switch(x){
        case 1:
        printf("How many ? : ");
        scanf("%d", &n);
        read(n);
        break;

        case 2:
        printf("All books \n");
        display(n);
        break;

        case 3:
        printf("Based on what would you like to search ? (Year 1/Author 2) :  ");
        int m;
        scanf("%d",&m);
        if(m == 1){
            printf("Enter the Year: ");
            int year;
            scanf(" %d",&year);
            fetch_y(year,n);
        }
        else{
            printf("Enter the Author Name: ");
            char author[20];
            scanf(" %[^\n]s",&author);
            details(author,n);
        }

    }
    }
    
}