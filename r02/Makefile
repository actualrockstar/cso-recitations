main: foo.o main.o
	gcc -o main foo.o main.o

main.o: main.c
	gcc -c main.c

foo.o: foo.c
	gcc -c foo.c

clean:
	rm -f foo.o main.o main
