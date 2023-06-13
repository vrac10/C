// Question 1:

#include<stdio.h>

int main(){
    char a[50];
    char b[50];
    char c[50];
    printf("Enter the first file name: ");
    scanf("%s",a);

    printf("Enter the second file name: ");
    scanf("%s",b);

    printf("Enter the third file name: ");
    scanf("%s",c);

    FILE *fp1  = fopen(a, "r");
    FILE *fp2 = fopen(b, "r");
    FILE *fp3 = fopen(c,"w");

    if(fp1 == NULL || fp2 == NULL){
        printf("File could not be opened");
    }
    else if (fp1 != NULL && fp2 != NULL){
        char x[100];
        while(fgets(x,100,fp1) != NULL){
            fputs(x,fp3);
        }

        while(fgets(x,100,fp2) != NULL){
            fputs(x,fp3);
        }
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
}

// Question 2:

 #include<stdio.h>

int main(){

    char fileName[50];
    printf("Enter the file name: ");
    scanf("%s",fileName);

    FILE *fp = fopen(fileName,"w");
    FILE *fp2 = fopen(fileName,"r");

    int n;
    printf("Enter the number the of lines you would like to enter: ");
    scanf("%d",&n);

    printf("The lines are: \n");
    char a[100];
    while(n--){
        scanf(" %[^\n]s",a);
        fputs(a,fp);
        fputs("\n",fp);
    }
    fclose(fp);
    printf("The content of the file %s is: \n",fileName);
    while(fgets(a,100,fp2) != NULL){
        printf("%s",a);
    }

    fclose(fp2);

}

// Question 3:

#include<stdio.h>
#include<string.h>

int main(){
    FILE *fp = fopen("file1.txt","r");
    FILE *fp2 = fopen("file2.txt","r");

    char ch,ch2;
    int line_number = 1, error_count = 0, error_position = 1;
    while((ch = fgetc(fp)) != EOF  &&  (ch2 = fgetc(fp2)) != EOF){
        
        if(ch == '\n'){
            line_number++;
            error_position = 0;
        }
        if(ch != ch2){ 
            error_count++;
            printf("Line Number : %d   Error Position : %d \nTotal Errors : %d\n",line_number,error_position,error_count);
        }

        error_position++;

    }

    fclose(fp);
    fclose(fp2);
    
    
}

