#include<iostream>
#include "jogo.h"

Jogo::Jogo(){
	_n_max_jogadores = 3;
	_n_max_dados     = 3;
	_n_jogadores     = 0;
	_n_dados         = 0;
}
Jogo::Jogo(int njogadores, int ndados):_n_max_jogadores(njogadores),_n_max_dados(ndados),_n_dados(0),_n_jogadores(0){}

void Jogo::addDado(Dado *d){
	if(_n_dados < _n_max_dados){
		_dados[_n_dados++] = d;
	}
}

void Jogo::addJogador(Jogador *j){
	if(_n_jogadores < _n_max_jogadores){
		_jogadores[_n_jogadores++] = j;
	}
}

int Jogo::getNJogadores(){
	return _n_jogadores;
}
int Jogo::getNDados(){
	return _n_dados;
}

int Jogo::getMaxJogadores(){
	return _n_max_jogadores;
}
int Jogo::getMaxDados(){
	return _n_max_dados;
}
/*
 * Jogo::Jogo(Jogo &jogo){
	_nome = jogador->getNome();
	_ativo = jogador->getAtivo();
}*/

std::ostream& operator<<(std::ostream&o, Jogo&j){
	o << "Jogo : J(" << j._n_jogadores << "/" << j._n_max_jogadores << ") e D(" << j._n_dados << "/" << j._n_max_dados << ")." << std::endl;
	return o;
}
void Jogo::run(){
	int n_ativos =_n_jogadores;
	int soma=0;
	while (n_ativos!=1){
		for(int j=0;j<_n_jogadores;j++){
			if (true){
				soma = 0;
				for(int d=0;d<_n_dados;d++){
					soma = soma + 3; // joga dado
				}
			}
		}
		n_ativos--;
	}
}
