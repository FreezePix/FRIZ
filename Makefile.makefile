CC=g++

CFLAGS=-c -Wall

all: stack


stack: main.o stack.o
	
	g++ main.o stack.o


main.o: main.cpp
	
	g++ -c -Wall main.cpp


stack.o: stack.cpp
	
	g++ -c -Wall stack.cpp

clean:
	
	rm -rf *.o stack
