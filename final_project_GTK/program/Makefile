CC=g++
PROG=final_project

BIN=./bin
OBJ=./build
SRC=./src
INC=./include


CPPFLAGS=-Wall -pedantic -O3 -std=c++11 -I$(INC)
CPPTAIL=`pkg-config --cflags --libs gtk+-3.0`

OBJS=$(OBJ)/main.o

all:$(PROG)

$(PROG):$(OBJS)
	$(CC) $(CPPFLAGS) -o $(BIN)/$(PROG) $(OBJS) $(CPPTAIL)

$(OBJ)/main.o: $(SRC)/main.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $(OBJ)/main.o $(CPPTAIL)

clean:
	rm -rf $(BIN)/*
	rm -rf $(OBJ)/*

run:
	make clean
	make all
	$(BIN)/$(PROG)
