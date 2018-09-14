BIN=./bin
OBJ=./build
INC=./include
SRC=./src

CC=g++
CCFLAGS=-Wall -pedantic -std=c++11 -I$(INC)

PROG=$(BIN)/resta_um

OBJS= $(OBJ)/dado.o $(OBJ)/jogador.o $(OBJ)/jogo.o $(OBJ)/main.o
all:$(PROG)

$(PROG):$(OBJS)
	$(CC) $(CCFLAGS) -o $(PROG) $(OBJS)

$(OBJ)/main.o: $(SRC)/main.cpp #$(INC)/jogo.h $(INC)/jogador.h $(INC)/dado.h
	$(CC) $(CCFLAGS) -c $(SRC)/main.cpp -o $(OBJ)/main.o

$(OBJ)/dado.o: $(SRC)/dado.cpp $(INC)/dado.h
	$(CC) $(CCFLAGS) -c $(SRC)/dado.cpp -o $(OBJ)/dado.o

$(OBJ)/jogo.o: $(SRC)/jogo.cpp $(INC)/jogo.h
	$(CC) $(CCFLAGS) -c $(SRC)/jogo.cpp -o $(OBJ)/jogo.o

$(OBJ)/jogador.o: $(SRC)/jogador.cpp $(INC)/jogador.h 
	$(CC) $(CCFLAGS) -c $(SRC)/jogador.cpp -o $(OBJ)/jogador.o

clean:
	rm -rf $(OBJ)/*
	rm -rf $(BIN)/*

run:
	reset
	make clean
	make all
	$(PROG)
