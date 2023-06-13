#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int info;
	struct node *next;
}NODE;

NODE* orderedSLL(NODE* head,int ele);
void sortLL(NODE* head);
void display(NODE *head);
int sumAlternate(NODE *head);
int sumEvenData(NODE *head);
int sumOddData(NODE *head);
NODE* freeList(NODE* head);

int main()
{
	NODE *head=NULL;
	int n;
	int ele;
	int sum;
    NODE *hea = NULL;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ele);
		head=orderedSLL(head,ele);
        if(i == 0){
            hea = head;
        }
    }

    sortLL(hea);
	display(hea);
	printf("\n");
	sum=sumAlternate(hea);
	printf("%d\n",sum);
	sum=sumEvenData(hea);
	printf("%d\n",sum);
	sum=sumOddData(hea);
	printf("%d\n",sum);

	head=freeList(hea);
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

int sumAlternate(NODE *head){
    int counter = 1;
    int sum = 0;
    while(head!=NULL){
        if(counter % 2 != 0){
        sum += head->info;
        }
        counter++;
        head = head->next;
    }
    return sum;
}


int sumEvenData(NODE *head){
    int sum = 0;
    while(head!=NULL){
        if(head->info % 2 == 0){
        sum += head->info;
        }
        head = head->next;
    }
    return sum;

}

int sumOddData(NODE *head){
       int sum = 0;
    while(head!=NULL){
        if(head->info % 2 != 0){
        sum += head->info;
        }
        head = head->next;
    }
    return sum;

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