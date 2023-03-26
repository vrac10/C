/*
Paradigm:
1) Functional- Function should be the first class citizen . No side effects. Assign Function name to another, pass function name as an argument
                Scheme is a branch of Lisp language
                Haskell they are written in mathematical functions 
                Miranda is useful for rapid prototyping it is implemented mostly on unix systems 
                JavaScript used for webdev

2) Logical- Uses predicates , Extraction of knowledge from basuic facts and relations (For frameworks of web pages)
            ASP, Active server page
            Prolog, Programming in logics
            Datalog, Declarative logic programming
            
3) Object oriented- User perception is taken into account , Data needs protection
                    Python 
                    Java
                    C++

TIOBE index: The importance of being earnest , 2023 march report - 1. Python 2. C 3. Java 4. C++ 5. C# 

Applications of C/C++ :
1) Linux Kernel it is written in C 
2) Adobe systems inclused photoshop and illustrator
3) Mozilla 
4) Bloomberg PRovides real time financial information to investors
5) Callas software supports PDF
6) Symbian os 

%d is used for numbers , %i as well 
%s is for string 
%c is for character 

'.o' extension is used for object file

dev/null is a special file that discards all of it input

*/

#include <stdio.h>

int main(){
    double i;
    i = 0.1+0.1+0.1;
    printf("C version is %ld \n", __STDC_VERSION__);
    printf("%f", i);
}
