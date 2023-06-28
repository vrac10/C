#include<stdio.h>
#include<string.h>
#include "interface.h"

void read(int n){
    for(int i = 0; i < n; i++){
        printf("Enter id: ");
        scanf("%d", &s[i].id);
        printf("Enter title: ");
        scanf(" %[^\n]s", &s[i].title);
        printf("Enter the author name: ");
        scanf(" %[^\n]s", &s[i].author);
        printf("Enter the price: ");
        scanf(" %d", &s[i].price);
        printf("Enter the year of publication: ");
        scanf("%d",&s[i].year);
        printf("\n");
    }
}
void display(int n){
    for(int i = 0; i < n; i++){
        printf("id: %d\n", s[i].id);

        printf("title: %s\n", s[i].title);

        printf("author name: %s\n", s[i].author);

        printf("price: %d\n", s[i].price);

        printf("year of publication: %d\n",s[i].year);
        
        printf("\n");
    }
}
void fetch_y(int year, int n){
    int x = 0;
    for(int i = 0; i < n; i++){
        if(s[i].year == year){
        printf("id: %d\n", s[i].id);

        printf("title: %s\n", s[i].title);

        printf("author name: %s\n", s[i].author);

        printf("price: %d\n", s[i].price);

        printf("year of publication: %d\n",s[i].year);
        
        printf("\n");
        x++;
        }
    }
    if(!x){
        printf("No record found\n");
    }
}
void details(char *authorname, int n){
    int x = 0;
    for(int i = 0 ; i < n; i++){
        if(strcmp(authorname,s[i].author) == 0){
        printf("id: %d\n", s[i].id);

        printf("title: %s\n", s[i].title);

        printf("author name: %s\n", s[i].author);

        printf("price: %d\n", s[i].price);

        printf("year of publication: %d\n",s[i].year);
        
        printf("\n");
        x++;
        }
    }
    if(!x){
        printf("No records found\n");
    }
}