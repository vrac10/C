/*
Linked List: A collection of connected structures
Types : 
1) Singly Linked List  
2) Doubly Linked List
3) Circular Linked List

Application:
1) Implementation of stacks and queues
2) Implementation of Graphs
3) Maintaining Dictionary
4) Gaming
5) Evaluation of Arithmetic Expression
*/



#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int info;
    struct node *link;
}node_t;

void display(node_t*);
void free_list(node_t*);
node_t *addElement(node_t*, int);
void deleteElement(node_t* p);
node_t *deleteFirstElement(node_t* p);
void addEndElement(node_t* p, int n);
void addInMiddle(node_t *p, int n);

int main(){
    node_t *s;
    s = (node_t*)malloc(sizeof(node_t));
    s->info = 100;
    s->link = (node_t*)malloc(sizeof(node_t));
    s->link->info = 200;
    s->link->link = (node_t*)malloc(sizeof(node_t));
    s->link->link->info = 300;
    s->link->link->link = NULL;

    display(s);
    //free(s);
    // s = addElement(s,20);
    // display(s);
    // deleteElement(s);
    // display(s);
    // s = deleteFirstElement(s);
    // display(s);
    addEndElement(s,300);
    display(s);
    // addInMiddle(s,25);
    // display(s);

   // s = NULL;

}

void display(node_t* a){
    while(a != NULL){
        printf("%d ",a->info);
        a = a->link;
    }
}

void free_list(node_t* p){
    node_t* d = p;
    while(p != NULL){
        p = p->link;
        printf("\n deleting the node with info %d\n",d->info);
        free(d);
        d = p;
    }
}

node_t *addElement(node_t* p, int in){
    node_t* head = malloc(sizeof(node_t));
    head->info = in;
    head->link = p;
    return head;
}

void deleteElement(node_t* p){
    node_t *a;

    while(p->link != NULL){
        a = p;
        p = p->link;
    }
    free(p);
    a->link = NULL;
}

node_t *deleteFirstElement(node_t* p){
    node_t *head = p;
    head = head->link;
    free(p);
    return head;
}

void addEndElement(node_t* p, int n){
    node_t *x;
    node_t *new = (node_t*)malloc(sizeof(node_t));
    while(p != NULL){
        x = p;
        p = p->link;
    }
    new->info = n;
    new->link = NULL;
    x->link = new;

    

}




void addInMiddle(node_t *p, int n){
    node_t *head = (node_t *) malloc(sizeof(node_t));
    node_t *start = p;
    head->info = n;
    int counter = 0;
    while(p != NULL){
        counter++;
        p = p->link;
    }
    
    for(int i = 0; i < (counter/2) + 1; i++){
        if(i == (counter/2)){
            head->link = start->link;
            start->link = head;
        }
        start = start->link;
    
    }
    
}
