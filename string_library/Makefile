all:test 

test:test.o string.o
	gcc -o test test.o string.o

string.o:string.c
	gcc -c -g -o string.o string.c

test.o:test.c
	gcc -c -g -o test.o test.c

clean:
	rm -f *.o
	rm -f test string
