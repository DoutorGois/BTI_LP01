BIN=./bin
OBJ=./build
INC=./include
SRC=./src

CC=g++
PROG=$(BIN)/sigaa
CPPFLAGS=-Wall -pedantic -std=c++11 -I$(INC)

OBJS=$(OBJ)/main.o $(OBJ)/alunos.o

all:$(PROG)

$(PROG):$(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS)

$(OBJ)/turmas.o:$(SRC)/turmas.cpp $(INC)/turmas.h
	$(CC) $(CPPFLAGS) -o $(OBJ)/turmas.o -c $(SRC)/turmas.cpp

$(OBJ)/alunos.o:$(SRC)/alunos.cpp $(INC)/alunos.h
	$(CC) $(CPPFLAGS) -o $(OBJ)/alunos.o -c $(SRC)/alunos.cpp

$(OBJ)/main.o:$(SRC)/main.cpp
	$(CC) $(CPPFLAGS) -o $(OBJ)/main.o -c $(SRC)/main.cpp

clean:
	rm -rf $(BIN)/*
	rm -rf $(OBJ)/*

run:
	make clean
	make run
	$(PROG)

