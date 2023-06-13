#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct node{
    int info;
    struct node *link;
}node_t;

void printList(node_t* s){
    while(s!=NULL){
        printf("%d ",s->info);
        s = s->link;
   }
}

node_t* addStart(node_t* head, int n){
    node_t* s = (node_t*) malloc(sizeof(node_t));
    s->info = n;
    s->link = head;
    return s;
}

void deleteEnd(node_t* head){
    node_t* k;
    while(head->link != NULL){
        k = head;
        head = head->link;
    }
    free(head);
    k->link = NULL;
    
}

node_t *deleteFront(node_t* head){
    node_t* k = head;
    head= head->link;
    free(k);
    return head;
}

void addEnd(node_t* head,int n){
    node_t* new = (node_t*) malloc(sizeof(node_t));
    while(head->link != NULL){
        head = head->link;
    }
    new->info = n;
    new->link = NULL;
    head->link = new;

}


int main(){
   node_t *s = (node_t*) malloc(sizeof(node_t));
   s->info = 100;
   s->link = (node_t*) malloc(sizeof(node_t));
   s->link->info = 200;
   s->link->link = NULL;

    printList(s);
    s = addStart(s,50);
    printf("\n");
    printList(s);
    deleteEnd(s);
    printf("\n");
    printList(s);
    s = deleteFront(s);
    printf("\n");
    printList(s);
    addEnd(s,89);
    printf("\n");
    printList(s);


}