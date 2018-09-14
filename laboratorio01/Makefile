BIN=./bin
OBJ=./build
SRC=./src
INC=./include

CC=g++
CCFLAG=-Wall -pedantic -std=c++11 -I$(INC)
PROG=$(BIN)/empresas

OBJS=$(OBJ)/main.o $(OBJ)/funcionario.o 
OBJS2=$(OBJ)/empresa.o

all:$(PROG)
	echo "Fair attempt"

$(PROG):$(OBJS)
	$(CC) $(CCFLAG) -o $(PROG) $(OBJS)

$(OBJ)/main.o: $(SRC)/main.cpp
	$(CC) $(CCFLAG) -o $(OBJ)/main.o -c $(SRC)/main.cpp

$(OBJ)/funcionario.o: $(SRC)/funcionario.cpp $(INC)/funcionario.h $(INC)/empresa.h
	$(CC) $(CCFLAG) -o $(OBJ)/funcionario.o -c $(SRC)/funcionario.cpp

$(OBJ)/empresa.o: $(SRC)/empresa.cpp $(INC)/funcionario.h $(INC)/empresa.h 
	$(CC) $(CCFLAG) -o $(OBJ)/empresa.o -c $(SRC)/empresa.cpp

clean:
	rm -rf $(BIN)/*
	rm -rf $(OBJ)/*

run:
	reset
	make clean
	make all
	$(PROG)
