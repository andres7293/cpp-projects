CC=g++ 
CFLAGS=-Wall
SRC += \
	Fifo_test.cpp \
	Fifo.cpp \

TARGET=Fifo_test.out

all: $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -rf *.out

run:
	./$(TARGET)
