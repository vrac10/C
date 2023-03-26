/*
Selection structures:
1) if
2) if-else
3) if - else if - else if - else
4) switch

de facto: It is a legally recognised practice but not realistic (well defined language specification but we barely use it )
            example - Algol 68 (big time joke miss)
de jure: It is legally unrecognised but practically used  (no well defined language specification but we extensively use it)   
            example - Pearl         
*/

#include <stdio.h>
int main(){
/*int a,b,c;
int count=0;
scanf("%d %d %d",&a,&b,&c);
if(a==b) count++;
if(b==c) count++;
if(c==a) count++;
if(count==0) printf("it is a scalene triangle");
if(count==1) printf("it is an isoceles triangle");
if(count==3) printf("it is an equilateral");*/

int a,b,c;
int count=-1;
scanf("%d %d %d",&a,&b,&c);
if(a==b) count++;
else if(b==c) count++;
else if(c==a) count++;
else printf("no");


switch (count){
    case 0: printf("Scalene triangle\n");break;
    case 1: printf("Isoceles triangle\n");break;
    case 3: printf("Equilateral triangle\n");break;

    default: printf("Please enter a valid triangle sides\n");
}


}