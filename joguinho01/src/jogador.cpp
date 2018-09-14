#include<iostream>
#include "jogador.h"

Jogador::Jogador(){
	_nome = "José";
	_ativo = true;
}
Jogador::Jogador(std::string nome):_nome(nome),_ativo(true){}

/*
Jogador::Jogador(Jogador &jogador){
	_nome = *jogador->getNome();
	_ativo = *jogador->getAtivo();
}
*/
std::string Jogador::getNome(){
	return _nome;
}

bool Jogador::getAtivo(){
	return _ativo;
}


