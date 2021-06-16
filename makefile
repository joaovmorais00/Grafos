all: main

main: main.c tp1.o 
	gcc -O3 tp1.o main.c -o main  -w

tp1.o: tp1.c tp1.h
	gcc -O3 -c  tp1.c  -w

clear:
	rm *.o