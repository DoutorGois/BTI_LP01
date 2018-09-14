# Exemplo de Makefile 
# Aula de LP1 2018.2
# 07-09/08/2018
# Clonagem do código para testes : git clone https://github.com/imdcode/makeaula.git exemplo2
#
# Silvio Costa Sampaio
#

CC = g++
PROG = $(BIN)/teste

OBJ = ./build
SRC = ./src
BIN = ./bin
INC = ./include

CPPFLAGS = -Wall -pedantic -std=c++11 -I$(INC)

OBJS = $(OBJ)/circulo.o $(OBJ)/retangulo.o $(OBJ)/triangulo.o $(OBJ)/calculadorArea.o $(OBJ)/main.o

all: $(PROG)

$(PROG): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS)

$(OBJ)/circulo.o: $(SRC)/circulo.cpp $(INC)/circulo.h
	$(CC) $(CPPFLAGS) -c $(SRC)/circulo.cpp -o $(OBJ)/circulo.o

$(OBJ)/retangulo.o: $(SRC)/retangulo.cpp $(INC)/retangulo.h
	$(CC) $(CPPFLAGS) -c $(SRC)/retangulo.cpp -o $(OBJ)/retangulo.o

$(OBJ)/triangulo.o: $(SRC)/triangulo.cpp $(INC)/triangulo.h
	$(CC) $(CPPFLAGS) -c $(SRC)/triangulo.cpp -o $(OBJ)/triangulo.o

$(OBJ)/calculadorArea.o: $(SRC)/calculadorArea.cpp $(INC)/calculadorArea.h
	$(CC) $(CPPFLAGS) -c $(SRC)/calculadorArea.cpp -o $(OBJ)/calculadorArea.o

$(OBJ)/main.o: $(SRC)/main.cpp $(INC)/calculadorArea.h
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $(OBJ)/main.o

clean: 
	rm -f $(BIN)/*
	rm -f $(OBJ)/*