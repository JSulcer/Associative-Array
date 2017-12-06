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

$(TARGET): main.o associative.o
	$(CC) main.o associative.o -o $(TARGET)

main.o: main.cpp associative.h
	$(CC) $(CFLAGS) main.cpp

associative.o: associative.cpp associative.h node.cpp node.h
	$(CC) $(CFLAGS) associative.cpp

clean:
	rm *.o *~ $(TARGET)
