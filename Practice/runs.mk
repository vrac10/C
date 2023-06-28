./a.out : interface.o seperation.o
	gcc interface.o seperation.o
interface.o : interface.c interface.h
	gcc -c interface.c
seperation.o: seperation.c
	gcc -c seperation.c