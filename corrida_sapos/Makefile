OBJ=./build
SRC=./src
INC=./include
BIN=./bin

PROG=$(BIN)/saporun
CC=g++

CPPFLAGS=-O3 -g -Wall -pedantic -std=c++11 -I$(INC)

OBJS=$(OBJ)/sapo.o $(OBJ)/corrida.o $(OBJ)/main.o 

all :$(PROG)

$(PROG):$(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS)

$(OBJ)/main.o: $(SRC)/main.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $(OBJ)/main.o

$(OBJ)/sapo.o: $(SRC)/sapo.cpp $(INC)/sapo.h
	$(CC) $(CPPFLAGS) -c $(SRC)/sapo.cpp -o $(OBJ)/sapo.o

$(OBJ)/corrida.o: $(SRC)/corrida.cpp $(INC)/sapo.h $(INC)/corrida.h
	$(CC) $(CPPFLAGS) -c $(SRC)/corrida.cpp -o $(OBJ)/corrida.o

clean: 
	rm -rf $(OBJ)/*
	rm -rf $(BIN)/*

run:
	make clean
	make all
	$(PROG)
