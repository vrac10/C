./a.out: palin.o a.o
	gcc palin.o a.o
palin.o: palin.c palin.h
	gcc -c palin.c
a.o: a.c
	gcc -c a.c
	