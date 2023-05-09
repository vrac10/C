./a.out: palin.o test1.o
	gcc palin.o test1.o
palin.o: palin.c palin.h
	gcc -c palin.c
test1.o: test1.c
	gcc -c test1.c
	