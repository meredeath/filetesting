all: main.o
	gcc main.o

main.o: main.c
	gcc -c main.c

run:
	./a.out

clear:
	rm *.o
	rm a.out
