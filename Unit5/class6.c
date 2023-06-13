#include<stdio.h>

int main()

{

char ch;

FILE *fp;

fp = fopen("datafile.txt", "w");

while ((ch = fgetc(fp)) != EOF)

{

printf("%c", ch);

}

printf("Thank you.");

fclose(fp);

return 0;

}