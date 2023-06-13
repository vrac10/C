#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int info;
    struct node *link;
}node_t;


void addEnd(node_t*s, int n){
    node_t *p = (node_t *) malloc(sizeof(node_t));
    p->info = n;
    p->link = NULL;
    s->link = p;
}

void display(node_t *p){
    while(p!=NULL){
        printf("%d ",p->info);
        p = p->link;
    }
}

void deleteEnd(node_t *p){
    node_t *k;
    while(p->link!=NULL){
        k = p;
        p = p->link;
    }
    free(p);
    k->link = NULL;
}

node_t *addStart(node_t *p, int k){
    node_t *head = p;
    node_t *a = malloc(sizeof(node_t));
    a->info = k;
    a->link = head;
    head = a;
    return head;
}

node_t *deleteStart(node_t *p){
    node_t *head = p;
    head = p->link;
    free(p);
    return head;
}

void delete(node_t *p){
    node_t *d = p;
    while(p != NULL){
        p = p->link;
        free(d);
        d=p;
    }
}

int main(){
    node_t *s = malloc(sizeof(node_t));
    s->info = 100;
    addEnd(s,200);
    display(s);
    deleteEnd(s);
    display(s);
    s = addStart(s,10);
    display(s);
    s = deleteStart(s);
    display(s);
    delete(s);
    display(s);
}