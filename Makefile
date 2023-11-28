all: flatordeers3-1.o flatordeers3.o flatordeers3-2.o
	gcc flatordeers3.o flatordeers3-1.o flatordeers3-2.o -o prog
flatordeers3.o: flatordeers3.c
	gcc -c flatordeers3.c
flatordeers3-1.o: flatordeers3-1.c
	gcc -c flatordeers3-1.c
flatordeers3-2.o: flatordeers3-2.c
	gcc -c flatordeers3-2.c
