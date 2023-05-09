./a.out : palin.o class4.o
	gcc palin.o class4.o
palin.o : palin.c palin.h
	gcc -c palin.c
class4.o : class4.c
	gcc -c class4.c