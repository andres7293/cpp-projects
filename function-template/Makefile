CC=g++
CPPFLAGS=-Wall -g -std=c++11

SOURCES=function-template.cpp
OBJECT=$(SOURCES:.cpp=.o)

all:	function-template.cpp
	$(CC) $(CPPFLAGS) -c function-template.cpp -o function-template.o
	$(CC) $(CPPFLAGS) -o function-template.out function-template.o

clean:
	rm -f *.out *.o

cpp-version:
	$(CC) --version

