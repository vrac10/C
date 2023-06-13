#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
    int roll;
    char name[50];
}s[50];

void selectionSortRoll(struct student *arr[],int n){
    int i, j;
    int pos;
    char temp1[100];
    for(i = 0; i < n; i++){
        pos = i;
        for(j = i+1;j < n ; j++){
            if(arr[j]->roll < arr[pos]->roll){
                pos = j;
            }
        }
        if(pos != i){
            int temp = arr[i]->roll;
            arr[i]->roll = arr[pos]->roll;
            arr[pos]->roll = temp;

            strcpy(temp1,arr[i]->name);
            strcpy(arr[i]->name,arr[pos]->name);
            strcpy(arr[pos]->name,temp1);
        }
    }
}

void selectionSortName(struct student *arr[],int n){
    int i, j;
    int pos;
    char temp1[100];
    for(i = 0; i < n; i++){
        pos = i;
        for(j = i+1;j < n ; j++){
            if(strcmp(arr[j]->name,arr[pos]->name) < 0){
                pos = j;
            }
        }
        if(pos != i){
            int temp = arr[i]->roll;
            arr[i]->roll = arr[pos]->roll;
            arr[pos]->roll = temp;

            strcpy(temp1,arr[i]->name);
            strcpy(arr[i]->name,arr[pos]->name);
            strcpy(arr[pos]->name,temp1);
        }
    }

}

void printArray(struct student *arr[], int n){
    for(int i = 0; i<n;i++){
        printf("%d ",arr[i]->roll);
        printf("%s\n",arr[i]->name);
    }
}

int main(){
    FILE *fp = fopen("student.csv","r");
    if(fp == NULL){
        printf("NO");
    }else{
    struct student *students[50];
    char a[100];
    fgets(a,100,fp);
    int i = 0;

    while(fgets(a,100,fp) != NULL){
        char *val = strtok(a,",");
        s[i].roll = atoi(val);
        printf("%s ",val);
        val = strtok(NULL,",");
        strcpy(s[i].name,val);
        printf("%s\n",val);
        students[i] = &s[i];
        i++;
    }

    int choice;
    printf("Enter your option\n1.sort on roll\n2.sort on name\n0.exit\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        selectionSortRoll(students,i);
        printArray(students,i);
        break;

        case 2:
        selectionSortName(students,i);
        printArray(students,i);
        break;

        case 0:
        printf("Done\n");
        break;

        default:
        printf("NO\n");
        break;

    }

    }
}