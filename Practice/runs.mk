./a.out : interface.o implementation.o
	gcc interface.o implementation.o
interface.o : interface.c interface.h
	gcc -c interface.c
implementation.o: implementation.c
	gcc -c implementation.c