all: main.o string.o
	gcc -o string main.o string.o

main.o: main.c string.h
	gcc -c main.c

string.o: string.c string.h
	gcc -c string.c

run:
	./string

clean:
	rm *.o
	rm *~
