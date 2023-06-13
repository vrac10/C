/*
fprintf: it returns the no of characters output to the file on success and end on file on error
fscanf: it returns a number of arguments that were assigned some values on success and rreturn end of file on error 
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int info;
    struct node *link;
}node_t;

int main(){
    node_t *head = malloc(sizeof(node_t));

    head->info = 5;
    head->link = malloc(sizeof(node_t));
    head->link->info = 4;
    head->link->link = malloc(sizeof(node_t));
    head->link->link->info = 3;
    head->link->link->link = malloc(sizeof(node_t));
    head->link->link->link->info = 2;
    head->link->link->link->link = malloc(sizeof(node_t));
    head->link->link->link->link->info = 1;
    head->link->link->link->link->link = NULL;
    int count = 0;
    node_t *a = head;
    while(head != NULL){
        count = 0;
        while(head->link != NULL){
            if(head->info > head->link->info){
                int temp = head->link->info;
                head->link->info = head->info;
                head->info = temp;
                count++;
            }
            head = head->link;
        }
        if(count == 0){
            break;
        }
        else{
        head = a;
        }
    }
    while(a != NULL){
        printf("%d",a->info);
        a=a->link;
    }

}