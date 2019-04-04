CC=g++
CPPFLAGS=-g -Wall -std=c++11

test.out:	test.cpp Fifo.h
	${CC} ${CPPFLAGS} $^ -o $@

clean:
	rm -f *.o *.out
