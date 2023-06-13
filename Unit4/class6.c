/*
Callback: A callback is any executable code that is passed as an argument to other code, which is used to call (execute) the 
argument at a given time.
In simple language, if a function name is passed to another finction as an argument to call it , then it will be called as a 
callback function.

SYNTAX : (return type of pointer) (*pointer name)(paramenters of the function)

atoi function : changes the string to integer (if no int int the string then changes it 0)
itoa function : changes the string to integer */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student{
    char name[50];
    int roll;
}s[100];

int main(){

    FILE *fp = fopen("student.csv","r");
    //FILE *fp2 = fopen("student.txt","w");
    char a[200];
    fgets(a,200,fp);
    int i = 0;

    while(fgets(a,200,fp) != NULL){
        char *val = strtok(a,",");

        s[i].roll = atoi(val);

        val = strtok(NULL,",");

        strcpy(s[i].name,val);

        i++;

    }

    int pos;

    for(int j = 0; j <= i; j++){
        pos = j;
        for(int k = j+1; k <= i; k++){
            if(s[pos].roll > s[k].roll){
                pos = k;
            }
        }
        if(pos != j){
            int temp = s[pos].roll;
            s[pos].roll = s[j].roll;
            s[j].roll = temp;
        }
    }



}