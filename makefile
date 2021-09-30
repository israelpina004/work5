all: hw5.o
	gcc -o hw5 hw5.o

hw5.o: hw5.c
	gcc -c hw5.c

run:
	./hw5
