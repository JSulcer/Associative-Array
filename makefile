# File: Makefile
# Authors: Jon Sulcer and Adam Chisolm
# Makefile for Associative Array program

# Compiler Version
CC=g++

# Target
TARGET=associative

# Compile with all errors and warnings
CFLAGS=-c -Wall -g

all: $(TARGET)

$(TARGET): main.o associative.o node.o
	$(CC) main.o associative.o node.o -o $(TARGET)

main.o: main.cpp associative.h
	$(CC) $(CFLAGS) main.cpp

associative.o: associative.cpp associative.h node.o node.h
	$(CC) $(CFLAGS) associative.cpp

node.o: node.cpp node.h
	$(CC) $(CFLAGS) node.cpp

clean:
	rm *.o *~ $(TARGET)
