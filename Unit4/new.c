#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int info;
	struct node *next;
}NODE;

NODE* orderedSLL(NODE *head,int ele);
void sortLL(NODE *head);
void display(NODE *head);
NODE* cocatenate(NODE *head1,NODE *head2);
NODE* freeList(NODE *head);

int main()
{
	NODE *head1=NULL,*head2=NULL;
	int n1,n2,ele;
	
    NODE *hea1 = NULL;
	scanf("%d",&n1);
	for(int i=0;i<n1;i++)
	{
		scanf("%d",&ele);
		head1=orderedSLL(head1,ele);
          if(i == 0){
            hea1 = head1;
        }
	}
	
    NODE *hea2 = NULL;
	scanf("%d",&n2);
	for(int i=0;i<n2;i++)
	{   
        scanf("%d",&ele);
		head2=orderedSLL(head2,ele);
        if(i == 0){
            hea2 = head2;
        }
		
	}
	
    if(hea1 != NULL && hea2 != NULL){
    sortLL(hea1);
	display(hea1);
	printf("\n");
    sortLL(hea2);
	display(hea2);
	printf("\n");
	head1=cocatenate(hea1,hea2);
	display(head1);
	printf("\n");
	
	head1=freeList(head1);
    hea1 = NULL;
    hea2 = NULL;
    head2 = NULL;
    }
    else{
        printf("Empty List");
    }
}

void sortLL(NODE* head){

    int count = 0;
    NODE *a = head;
    while(head != NULL){
        count = 0;
        while(head->next != NULL){
            if(head->info > head->next->info){
                int temp = head->next->info;
                head->next->info = head->info;
                head->info = temp;
                count++;
            }
            head = head->next;
        }
        if(count == 0){
            break;
        }
        else{
        head = a;
        }
    }
}

NODE *orderedSLL(NODE* head, int ele){
    NODE* new = malloc(sizeof(NODE));
    
    new->info = ele;
    new->next = NULL;

    if(head == NULL){
        head = new;
    }
    else{
        while(head->next!=NULL){
            head = head->next;
            
        }
        head->next = new;
    }
    
    return head;
    
}

void display(NODE* head){
    while(head!=NULL){
        printf("%d ",head->info);
        head=head->next;
    }
}

NODE* freeList(NODE* head){
    NODE* p=head;
    while(head!=NULL){
        head=head->next;
        free(p);
        p = head;
    }
    return head;
}

NODE* cocatenate(NODE *head1,NODE *head2){
    NODE* start = head1;
    while(head1->next!= NULL){
        head1 = head1->next;
    }
    head1->next = head2;
    head1 = start;
    return head1;
}