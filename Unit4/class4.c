/*
Problem solving with file handling :
*/

#include<stdio.h>
#include<string.h>

int main(){
    // char str[80] = "This is -www.pesuacademy.com-website";
    // const char s[2] = "-";
    // char *val;
    // val = strtok(str,s);
    // while(val != NULL){
    //     printf("%s\n",val);
    //     val = strtok(NULL,s);
    // }
    // printf("%s\n",val);
    // val = strtok(str,s);
    // printf("%s\n",val);

    FILE *f = fopen("matches.csv","r");

    char line[500];
    int count = 0;
    while(fgets(line,500,f)!=NULL){
        int k = 0;
        char *val = strtok(line,",");
        while(k <=5){
            val = strtok(NULL,",");
            k++;
        }   
        char *toss_winner = val;


            while (k <= 9){
                val = strtok(NULL,",");
                k++;
            }
        char *winner = val;
     
        if(strcmp(toss_winner,winner) == 0){
            count++;
        }

        

    }
    printf("%d",count);
   

}