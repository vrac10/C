#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
    int roll;
    char name[50];
}s[50];

void insertionSortRoll(struct student *arr[],int n){
    int i, key, j;
    char kn[100];
    for(i = 1; i < n; i++){
        key = arr[i]->roll;
        strcpy(kn,arr[i]->name);
        j = i-1;
        while(j>=0 && arr[j]->roll > key){
            arr[j+1]->roll = arr[j]->roll;
            strcpy(arr[j+1]->name,arr[j]->name);
            j = j-1;
        }
        arr[j+1]->roll = key;
        strcpy(arr[j+1]->name,kn);
    }
}

void insertionSortName(struct student *arr[],int n){
    int i, key, j;
    char kn[100];
    for(i = 1; i < n; i++){
        key = arr[i]->roll;
        strcpy(kn,arr[i]->name);
        j = i-1;
        while(j>=0 && strcmp(arr[j]->name,kn) > 0){
            arr[j+1]->roll = arr[j]->roll;
            strcpy(arr[j+1]->name,arr[j]->name);
            j = j-1;
        }
        arr[j+1]->roll = key;
        strcpy(arr[j+1]->name,kn);
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
    struct student *students[50];
    char a[50];
    fgets(a,50,fp);
    int i = 0;

    while(fgets(a,50,fp) != NULL){
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
        insertionSortRoll(students,i);
        printArray(students,i);
        break;

        case 2:
        insertionSortName(students,i);
        printArray(students,i);
        break;

        case 0:
        printf("Done\n");
        break;

    }

    
}